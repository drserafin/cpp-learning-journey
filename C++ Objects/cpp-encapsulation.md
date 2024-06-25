## C++ Encapsulation

The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as  `private` (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can rovide public get and set methods.

## How to access private members

In this example we are going to use the publice `get` and `set` methods:

```cpp
#include <iostream>

class Employee {
public:
    void setSalary(int s) { // setter
        salary = s;
    }

    int getSalary() { // getter
        return salary; // added a semicolon here
    }

private:
    int salary;
};

int main() {
    Employee myObject;
    myObject.setSalary(50000);
    std::cout << myObject.getSalary() << std::endl; // corrected myObject to myObject
    return 0;
}

``````