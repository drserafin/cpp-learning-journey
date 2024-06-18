C++ References

A reference variable in C++ is a "reference" to an existing variable in our program, and it is created with the & operator. Using a reference allows us to use either the original variable or the reference itself to access the same underlying data.

```cpp
#include<iostream>

int main(){
    
    std::string myName = "Kevin Serafin"; //myName variable
    std::string& myOtherName = myName;  //reference to myName
    
    std::cout << myName << std::endl;
    std::cout << myOtherName;
    
    return 0;
}



