# The `!` Operator

Use `!` to negate a boolean condition. 

Example: 
```cpp
#include <iostream> 

int main() {
    int x;
    int y;

    std::cout << "Enter the number for x: ";
    std::cin >> x;
    std::cout << "Enter the number for y: ";
    std::cin >> y;

    if (!(x < y)) {
        std::cout << "x is greater than or equal to y" << std::endl;
    } else {
        std::cout << "y is greater than x" << std::endl;
    }

    return 0;
}


``````