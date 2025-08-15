## const After the Method signature

When const is placed after the method signature (e.g int getData()), it signified that the method is a `const member function`. This means:

* No Modification: The const after the method name promises that the method will not modify any member variables of the class. When we say "does not modify any member variables of the class" it means that a `const member function` cannot change the values of the object's attributes (data members). This ensures that calling the method does not alter the state of the instance of the class on which the method is called.
```cpp
    #include<iostream>

    class Person{
    public:
        Person(std::string name, int age) : name(name), age(age) {}

        void birthday(){
            age++;
            std::cout << "Happy Birthday! You are now " << age << " years old." << std::endl;
        }

        void printInfo() const {
            std::cout << "Name: " << name << ", Age: " << age << std::endl;
            // age+++ // Error! Cannot modify age in a const member function
        }

        private:
            std::string name;
            int age;

    };

    int main(){
        Person person("John", 30);

        person.birthday();

        person.printInfo();
    }
}

``````
A `const member function` is meant for operations that only read or observe the object's state, without modifying it. It's a way to promise that the function won't change the object's internat state.

Think of a const member function of a "read-only"

## `const` after the method signature (in the parameter list);

When you pass a `const parameter` to a function, you are promissing that the function won't modify the orginal value. However, the function can still make a local copy or modify a local variable inside function. 

Think of it like a `read-only` promise for the passed value. The function can't change the orginal value, but it can still play with local sopes or variables inside the function

```cpp
void printAndModify(const int& x) {
    std::cout << "Orginal Value: " << x << std::endl;
    int localX = x;
    localX = 10;
    std::cout << "Modified local copy" << localX << std::endl;
    //The orginal x remained unchanged
}
``````
Declaring a `const member function` and making `const after the method signature(in the parameter list)` server different purpose:

* const parameters (read-only for parameters, can modify object state)
* const member functions (read-only for everything, cannot modify at all)

## const parameters:

 * Promise not to modify passed parameters
 * Can modify object's state
 * Read-only for parameters, but not for object state

## const member functions:

 * Promise not to modify object's state
 * Cannot modify passed parameters (implicitly const)
 * Read-only for everything (parameters and object state)
