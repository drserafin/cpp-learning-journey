## Key Concepts

## 1. Class Definition
Class MyClass:
Member Variable: int Value;
Constructor: Initializes Value with the given parameter.
Method: display() prints the value of Value.
Operator Overloading: << operator to print the value of MyClass objects.
## 2. Pointer to Stack-Allocated Object
Declaration: MyClass obj(42); creates an object on the stack.
Pointer: MyClass* ptr = &obj; points to the stack object.
Usage:
ptr holds the memory address of obj.
*ptr dereferences the pointer to access the Value of obj.
## 3. Pointer to Heap-Allocated Object
Allocation: MyClass* ptr2 = new MyClass(120); creates an object on the heap.
Pointer: ptr2 points to the heap object.
Usage:
*ptr2 accesses the Value of the heap-allocated object.
ptr2 holds the memory address of the heap object.
Memory Management: Use delete ptr2; to deallocate memory and prevent memory leaks.
## 4. Output
Memory Address: std::cout << ptr prints the address stored in the pointer.
Dereferenced Value: std::cout << *ptr prints the value of the object pointed to by the pointer.

## Summary
Stack vs. Heap: Stack objects are automatically managed and deallocated when they go out of scope. Heap objects require explicit allocation (new) and deallocation (delete).
Pointer Usage: Use pointers to access and manipulate objects indirectly. Ensure to free dynamically allocated memory to prevent memory leaks.


```cpp
#include <iostream>

class MyClass {
public:
    int Value;

    // Constructor
    MyClass(int v) : Value(v) {}

    // Method to display the value
    void display() const {
        std::cout << "The value is going to be " << Value << std::endl;
    }

    // Overload the << operator
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << obj.Value;
        return os;
    }
};

int main() {
    MyClass obj(42);
    obj.display(); // Output: The value is going to be 42

    // Pointer to stack-allocated object
    MyClass* ptr = &obj;

    std::cout << "Memory of obj: " << ptr << std::endl; // Prints memory address of obj
    std::cout << "Dereference of obj: " << *ptr << std::endl; // Prints value of obj (42)

    // Pointer to heap-allocated object
    MyClass* ptr2 = new MyClass(120);

    // Print value and memory address of heap-allocated object
    std::cout << "Value of obj2: " << *ptr2 << std::endl; // Prints value of obj2 (120)
    std::cout << "Address of obj2: " << ptr2 << std::endl; // Prints memory address of obj2

    // Clean up heap-allocated memory
    delete ptr2;

    return 0;
}


``````