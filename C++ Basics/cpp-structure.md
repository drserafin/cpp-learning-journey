## C++ Structures (struct)

C++ Structures are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure

Unlike an ~array~, a structure can contain many different data types (int, string,bool, etc.).

## Create Structure

To create a structure, use the `struct` keyword and declare each of its members inside curly braces. 

After the declaration, specifiy the name of the structure variable

```cpp
struct{
  int myNum;
  string myString;
  
} myStructure;

myStructure.myNum = 1;
myStructure.myString = "Hello World";

std::cout << myNum << std::endl;
std::cout << myString << std::endl;

``````

Structures can also act as custom data types used to store and manipulate data. You can think of it as a blueprint or a template that defines the structure of the data.

Example:

```cpp

struct myDataType {
  int myNum;
  string myString;
};

myDataType myVar1;
myDataType myVar2;
myDataType myVar3;

myVar1.myNum = 42;
myVar1.myString = "Hello";

myVar2.myNum = 21;
myVar2.myString = "World";

myVar3.myNum = 13;
myVar3.myString = "Fool";

cout << "myVar1: " << myVar1.myNum << ", " << myVar1.myString << endl;
cout << "myVar2: " << myVar2.myNum << ", " << myVar2.myString << endl;
cout << "myVar3: " << myVar3.myNum << ", " << myVar3.myString << endl;
``````