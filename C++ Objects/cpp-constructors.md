## C++ Constructors

A constructor in C++ is a special method that is automatically called when an object of a class is created.

To create a constructor, use the same name as the class, followed by parentheses `()`:

```cpp
#include <iostream>

class MyClass {
public:
  MyClass() {
    std::cout << "Hello World" << std::endl;
  }
};


int main(){
  MyClass.object; //Create an object of MyClass (this will the constructor)
  return 0;
}


``````

We can pass down arguments inside the constructor parameters and initialize class member varibales.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    // Constructor with parameters using initialization list
Car::Car(const std::string& b, const std::string& m, int y) : brand(b), model(m), year(y) {}

// Function to print details of a Car object
void printCarDetails(const Car& car) {
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
}

int main() {
    Car myCar("Toyota", "Corolla", 2020); // Create a Car object with constructor arguments
    printCarDetails(myCar); // Call function to print details of myCar
    return 0;
}

``````

* Initializer List: Using an initializer list (:) in the constructor is preferred for initializing member variables, as it allows for direct initialization and can improve performance and code readability.

* Function Parameters: Declaring function parameters as const Car& car allows functions like printCarDetails to efficiently access and display details of Car objects without modifying them.