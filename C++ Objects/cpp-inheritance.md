## C++ Inheritance

In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two caterogires

* derive class(child) - the lcass that inherites from another class
* base class (parent) - the class being inehrited from

To inherit from a class, use the `:`. 

In the example below , the Car class (child inherits the attributes and methods from the Vehicle class(parent):

 ```cpp
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
 ``````

 ## Multilevel Inheritance

 A class can also be derived from one class, which is already drived from another class.

 In the following example, MyGrandChild is derived from the class MyClass which is derived from Myclass

 ```cpp
 #include <iostream>
 using namespace std;

 // Base class
 class Employee {
   public: 
     void role() {
       cout << "Role: General Employee" << endl;
     }
 };

 // Derived class
 class Manager: public Employee {
   public:
     void responsibility() {
       cout << "Responsibility: Managing Team" << endl;
     }
 };

 // Derived class
 class Director: public Manager {
   public:
     void vision() {
       cout << "Vision: Overseeing Multiple Teams" << endl;
     }
 };

 int main() {
   Director director;
   director.role();
   director.responsibility();
   director.vision();
   return 0;
 }
```

## Multiple Inheritance

A class can also be derived from more than one base class, using a comma - separated list:

```cpp
#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

``````