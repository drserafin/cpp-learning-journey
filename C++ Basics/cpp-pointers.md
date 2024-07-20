**C++ Pointers**
We know that to get the memory address of a variable we will have to use the `&` operator following along the variable name. However, a simple and more effective method to obtain the memory address of a variable is to use pointers.

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
