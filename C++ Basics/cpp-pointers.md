**C++ Pointers**
We know that to get the memory address of a variable we will have to use the & operator following along the variable name. A easier and most effective way to get the memory address of a variable is to use 

We know that in order to obtain the memory address of a variable ,we use the & operator followed by the variable name. However, a simple and more effective method to obtain the memory address of a variable is to use pointers.

```cpp
#include<iostream>

int main(){

  bool myBoolean = true;
  std::cout << myBoolean << std::endl;
  
  bool* ptr = &myBoolean; // ptr is a pointer to a bool
  std::cout << ptr << std::endl; //holds the memory address of myBoolean
  std::cout << *ptr << std::endl; //de-referencing

  *ptr = false; // Change the value of the pointer

  std::cout << myBoolean << std::endl;




  return 0;
}
``````

Recap:
You declare a pointer using the * operator followed by the data type it points to. For example, int *ptr; declares a pointer named ptr that can store the memory address of an integer variable.

## Extra Notes 

Pointers can be initialized later, and can be reassigned to point different variables. It can also be null. 

```cpp

```````