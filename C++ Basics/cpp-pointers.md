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

Here we have array named words. 'words' is an array where each eleemnt is a const char*, So word[0] points to the string "one", 'words[1]' points to the string "two", and so on. When you acacess an element like 'words[0]', your're accessing the pointer to the string "one".

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


