# C++ Static and Non-Static

**Static**

A static variable is shared by all instances of a class or program. It is initialized only once, at program startup. It can be accessed without creating an instance of the class and retains its value between function calls.

In simple terms, if you declare a variable as `static`, it keeps its value between function calls.

For class members, if a class member is declared as `static`, it belongs to the class itself, not to any specific object of the class.

**Non-Static**

A non-static variable is unique to each instance of a class. It is initialized each time a new instance is created. Its value is lost when the instance is destroyed. It can only be accessed through an instance of the class.

## Example

```cpp
#include<iostream>

void increment() {
    static int count = 0;
    count++;
    std::cout << "Count: " << count << std::endl;
}

void increment2nd(){
    int count = 0;
    count++;
    std::cout << "Count: " << count << std::endl;
}


int main(){

    increment();//output 1
    increment();//output 2
    increment();//output 3


    //A non-static varible is a unique to each instance of a class
    increment2nd();//output 1
    increment2nd();//output 1
    increment2nd();//output 1



    return 0;
}
``````

Output: 
kevinserafin@Kevins-Air tester cpp % ./test
Count: 1
Count: 2
Count: 3
Count: 1
Count: 1
Count: 1
kevinserafin@Kevins-Air tester cpp % 