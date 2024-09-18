## Destructor in C++

Destructors in C++ are primarily used to free up the allocated memory. In C++ you myst manually delete the allocated memory to prevent memory leaks.

**Purpose:** Destructors are primarly used to fee up memory and relase resources that an object has acquired during its lifetime. 

**Automatic Cleanup:** In C++, destructors are automatically called when an object goes out of scope or is explicitly deleted. This automatic invocation ensures that resources are properly released without requiring manual intervention every time.

**Manual Deletion:** Manual Deletion: For objects created with new (dynamic allocation), you must manually delete them using delete to prevent memory leaks. The destructor provides a convenient place to put this delete operation, ensuring that any dynamically allocated memory is freed.

**Syntax:** Syntax: Destructors have the same name as the class but are preceded by a tilde (~). For example, for a class named MyClass, the destructor would be ~MyClass().

A destructor is a member function of a class that is executed when an object of that class is destoryed. It has not reutnr type and cannot take parameters.