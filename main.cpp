#include <iostream>
#include "stack.h"

int main()
{
   Stack<char> s1;
   Stack<int> s2({1,2,3});
   Stack<int> s3(s2);

   s3.push(4);
   s2.pop();
   char ch = 'a';
   s1.push(ch);
   s2.top() = 5;
   std::cout << "s2 top: " << s2.top();

   if(s2 == s3)
      std::cout <<"\nEqual: ";
   else
      std::cout <<"\nNo Equal: ";

   s2.swap(s3);

   std::cout << "s2 top: " << s2.top() << " s3 top: " << s3.top();
}
