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
Another Example:

Array of Pointers
In an array of pointers, each element is a pointer to a value. For example, an array of pointers to constant strings (const char*) is often used to handle multiple strings.

```cpp
#include <iostream>

int main() {
    const char* words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    std::cout << words[0] << std::endl; // Prints "one"

    return 0;
}

```````

## Explanation:
const char* words[]: Declares words as an array where each element is a const char* (pointer to a constant character). Each const char* points to a string literal.
words[0]: Points to the start of the string "one". When you use std::cout << words[0], it prints the string because std::cout is designed to handle const char* as C-strings and prints the entire string.

## Why No Explicit Dereferencing Needed in Arrays:
Arrays of Pointers: When you print words[0], you’re printing a const char*. The std::cout handles const char* by treating it as a pointer to a C-string and prints the string it points to. You don’t need to explicitly dereference because std::cout knows how to process const char* for printing strings.
Single Value Pointers: For pointers to single values like bool* or int*, std::cout does not automatically interpret the pointer as a value. You need to explicitly dereference the pointer (*ptr) to get the actual value stored at the address.

##Summary:
For Arrays of Pointers (e.g., const char* words[]): std::cout can print strings directly from pointers because it knows how to handle const char* as a C-string.
For Single-Value Pointers (e.g., bool* ptr): You must dereference the pointer (*ptr) to access and print the value it points to, as std::cout does not interpret the pointer as a value by default.


