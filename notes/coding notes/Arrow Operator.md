## What is the `->` operator about ?

in C++ , `->` operator is used to acess members of a class or struct through a pointer.

**Pointer Access:*** When you have a pointer to an object , you use `->` to acess the members of that object.

Example:
```cpp
struct Point {
    int x;
    int y;
};

Point* p = new Point;  // p is a pointer to a Point object
p->x = 10;             // Accesses the x member of the object p points to
p->y = 20;             // Accesses the y member of the object p points to
``````
Similar the code block below where we are first dereferncing the pointer `p` to acess the object it poitns to. After dereferencing, you can use the dot (`.`) operator to acess and modify the memebr variable `x` of that object.

```cpp
(*p).x = 10;  // Same as p->x = 10
(*p).y = 20;  // Same as p->y = 20
``````

