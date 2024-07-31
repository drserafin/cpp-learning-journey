## Passing by Reference

In C++, you can create methods that takes objects by reference. Passing obejcts by refernece allows you to interact with the class's functionality without copying the object, which can be more efficient, espiecially for large objects.

## Key Points
* Efficiency: Passing by reference avoids the overhead of copying objectgs, making the method more efficient.

* Modification: If the method modifies the object, those changes will be reflected outside the method as well, since it operates on the original object.

```cpp
#include <iostream>

class GraphicsImage {
public:
    int size;  // A data member of the class

    GraphicsImage() : size(10) {} // Constructor initializing size

    void setSize(int newSize) {
        size = newSize; // Method modifying the object
    }
};

void modifyImage(GraphicsImage& image) {
    image.setSize(20);  // Modifies the original object
}

int main() {
    GraphicsImage myObject; // Create an instance of GraphicsImage
    std::cout << "Size before: " << myObject.size << std::endl;

    modifyImage(myObject); // Pass the object by reference to the function

    std::cout << "Size after: " << myObject.size << std::endl; // Size is modified
    return 0;
}

}

``````