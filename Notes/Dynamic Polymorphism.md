# Polymorphism 

This code illustrates how polymorphism allows you to use base class pointers to work with objects of derived classes, ensuring the correct overridden methods are called at runtime.

```cpp
class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();  // Animal pointer pointing to a Dog object
    animalPtr->makeSound();         // Calls Dog's makeSound() due to virtual function
    delete animalPtr;               // Clean up
    return 0;
}
``````

Reminder that runtime refers to the period when a program is actualy executing, as opposed to the time when the program is being compiled.

For example: When Fortnite is installed on a computer, the code is already compiled. 