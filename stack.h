#pragma once
#include <iostream>
#include <vector>


template <typename T>
class Stack
{
   public:
      using container_type = typename std::vector<T>; 
      using value_type = typename std::vector<T>::value_type;
      using size_type = typename std::vector<T>::size_type;
      using reference = typename std::vector<T>::reference;
      using const_reference = typename std::vector<T>::const_reference;

   private: 
      std::vector<T> vec;

   public:
      Stack();
      Stack(const std::vector<T>& other);
      Stack(const Stack<T>& other);
      Stack(Stack<T>&& other);
      ~Stack();

      Stack& operator=(const Stack<T>& other);
      Stack& operator=(Stack<T>&& other);

      reference top();
      bool empty() const;
      size_type size() const;
      const container_type& data() const;

      void push(const value_type& value);
      void pop();
      void swap(Stack<T>& other);

};


template <typename T>
bool operator==(const Stack<T>& lhv, const Stack<T>& rhv);
template <typename T>
bool operator!=(const Stack<T>& lhv, const Stack<T>& rhv);
template <typename T>
bool operator>(const Stack<T>& lhv, const Stack<T>& rhv);
template <typename T>
bool operator<(const Stack<T>& lhv, const Stack<T>& rhv);
template <typename T>
bool operator>=(const Stack<T>& lhv, const Stack<T>& rhv);
template <typename T>
bool operator<=(const Stack<T>& lhv, const Stack<T>& rhv);

#include "stack.cpp"











