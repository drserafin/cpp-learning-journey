# Example Calculation

Suppose you have a window with a width of 1200 pixels and an image with a width of 800 pixels. You want to calculate how much you need to scale the iamge to fit the width of the window.

Here's how you can do it: 

```cpp

// Example calculation using static_cast<float>
float windowWidth = 1200;    // Window width in pixels
float imageWidth = 800;      // Image width in pixels

// Convert windowWidth to float and perform the division
float scaleFactor = static_cast<float>(windowWidth) / imageWidth;

// Print the result
std::cout << "Scale Factor: " << scaleFactor << std::endl; // Output: 1.5

``````