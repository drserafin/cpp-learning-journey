## C++ For Loops 

When you know exactly how many times you want to loop through a block of code, use the for loop instead of the while loop: 

## Syntax

```cpp
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
``````

Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed(everty time) after the code block has been executed.

## Nest Loops

In the follwing example below, we observe the the outer loop runs as long as 'i <= 2', and withint this loop, the inner loop continues running as long as 'j <= 3'. Once the condition of the inner loop becomes false, the outer loop iterates again.

```cpp
#include <iostream>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n";  // Executes 2 times

    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
    }
  }
  return 0;
}
``````
**Output**
```
Outer: 1
 Inner: 1
 Inner: 2
 Inner: 3
Outer: 2
 Inner: 1
 Inner: 2
 Inner: 3

