## Enum
An enum is a data type that consists of a set of named values. It is used to define a collection of named constnats, making code more readable and manageable by gviing meaningful names to integral values.

Why use Enums?
1. Readability: Enums make code more readable by replacing numeric constanst with descriptive names. For exampke , instead of using numberse like `1`, `2`, `3` to represent days of the week, you can use names like `Monday`, `Tuesday`, etc.
2. Maintainability: if you need to update values or add new ones, you only need to do so in one place--where the enum is defined--rather than throughout your code.
3. Type Safety: Enums ensure that values are restricted to the predefiend set of constants , reducing errors and increasing code saftely.

Example:

```cpp
enum Level {
  LOW,
  MEDIUM,
  HIGH
};
``````

To access the enum, you must create a variable of it.
Inside the main() method, specify the enum keyboard, followed by the name of the enum (Level1)and then the name of the enum variable (myVar in this example);

```cpp
enum Level myVar;
``````

We have now create a enum variable (myVar), you can assign a value to it.

The assigned value must be one of the items inside the enum (LOW, MEDIUM or HIGH):

```cpp
enum Level myVar = MEDIUM;
``````
By default, the first item (LOW) has the value 0, the second (MEDIUM) has the value 1, etc.

If you now try to print myVar, it will output 1, which represents MEDIUM:

```cpp
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;

  // Print the enum variable
  cout << myVar;

  return 0;
}
``````
