**C++ Memory Address**

In the previous file, we learned that the & operator was used to create a reference variable. But it can also be used to get the memoery address of a variable. The memory address is a location of where the variable is stored
on the computer. When a variable is created in C++, a memory addressed is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address. To access the memory address,
use the & operator and the result will reprsent where the variable is stored:

```cpp
#include<iostream>

int main(){
    
    std::string name = "Nancy";
    std::cout << &name;
    
    
    return 0;
}
``````
**NOTE: The memory address is in hexademical form (0x..). And why is it useufl to know memory address? Referecnes and Pointers are important in C++, because they give you the ability to manipulate the data in the comptuer's memory
-which can reduce the code and improve performance. These two features are one of the thigns that make C++ stand out from other programming languages**
