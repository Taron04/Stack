#include "stack.h"
#include <stdexcept>

template<typename T>
Stack<T>::Stack(){}

template<typename T>
Stack<T>::Stack(const std::vector<T>& other):vec(other)
{}

template<typename T>
Stack<T>::Stack(const Stack<T>& other):vec(other.vec)
{}

template<typename T>
Stack<T>::Stack(Stack<T>&& other):vec(other.vec)
{}

template<typename T>
Stack<T>::~Stack()
{}

template<typename T>
Stack<T>&  Stack<T>::operator=(const Stack<T>& other) {
vec = other.vec;
}

template<typename T>
Stack<T>& Stack<T>::operator=(Stack<T>&& other) {
vec = other.vec;
}

template<typename T>
typename Stack<T>::reference Stack<T>::top() {
return vec.back();
}

template<typename T>
bool Stack<T>::empty() const {
return vec.empty();
}

template<typename T>
typename Stack<T>::size_type Stack<T>::size() const {
return vec.size();
}

template<typename T>
const typename Stack<T>::container_type& Stack<T>::data() const 
{
   return vec;
}

template<typename T>
void Stack<T>::push(const Stack<T>::value_type& value) {
vec.push_back(value);
}

template<typename T>
void Stack<T>::pop() {
vec.pop_back();
}

template<typename T>
void Stack<T>::swap(Stack<T>& other) {
   std::swap(vec, other.vec);
}

template <typename T>
bool operator==(const Stack<T>& lhv, const Stack<T>& rhv){
   if(lhv.size() != rhv.size()) { return false; }
   return lhv.data() == rhv.data();
}
template <typename T>
bool operator!=(const Stack<T>& lhv, const Stack<T>& rhv){
   return !(lhv == rhv);
}
template <typename T>
bool operator>(const Stack<T>& lhv, const Stack<T>& rhv){
   if(lhv.size() > rhv.size()) { return true; }
   return lhv.data() > rhv.data();
}
template <typename T>
bool operator<(const Stack<T>& lhv, const Stack<T>& rhv){
   if(lhv.size() < rhv.size()) { return true; }
   return lhv.data() < rhv.data();
}
template <typename T>
bool operator>=(const Stack<T>& lhv, const Stack<T>& rhv){
   if(lhv.size() < rhv.size()) {return false; }
   return !(lhv < rhv); 
}
template <typename T>
bool operator<=(const Stack<T>& lhv, const Stack<T>& rhv){
   if(lhv.size() > rhv.size()){return false;}
   return !(lhv > rhv);
}





