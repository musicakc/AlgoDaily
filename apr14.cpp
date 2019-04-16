/*
Implement a Stack With Minimum
Recall that a stack is an abstract data type modeling a collection elements. Its primary operations are push (which adds an element to the top of the stack) and pop (which removes the most newest element).

Traditionally, a stack can easily be implemented in Javascript and many other languages using an array (and its built-in methods).

const stack = [];



stack.push(5);

stack.push(6);

stack.push(7);

stack.pop();

// 7

stack.pop();

// 6

However, let's say we wanted to implement a stack with the following interface:

push(val) - add an element on to the top of the stack.

pop(val) - remove the element at the top of the stack and return it.

peek(val) - see the element at the top of the stack without removing it.

min() - get minimum element in stack.

How would you do it, and can you implement it via a MinStack class? The class should have the following methods. Work off this skeleton:
*/
#include <iostream>

#define MAX 5
#define INT_MAX 10000
using namespace std;

class MinStack {

  stack<int> s;
  int min;

public:
  int arr[MAX];

  MinStack() {
    min = INT_MAX;
  }

  bool push(x);
  bool pop();

  bool push(int val) {
    if(min >= val)
      {
        s.push(min);
        min = val;
        s.push(val);
        return true;
      }
    else
    {
      s.push(val);
      return false;
    }
  }

  bool pop() {
    if(min == s.peek())
      {
        s.pop();
        min = s.peek();
        s.pop()
        return true;
      }
    else
    {
      cout<<"Popped value from stack: "<<endl;
      s.pop();
      return false;
    }

  }

  int peek() {
    return s.peek();
  }

  int min() {
    return min;

  }

}

int main()
{
  class MinStack ms;
  ms.push(12);
  ms.push(1);
  ms.push(23);
  ms.pop();
  return -1;
}