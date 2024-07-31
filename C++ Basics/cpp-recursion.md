## C++ Recursion

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

Recursion may be a bit difficult to understand. The best way to figure out how it towkrs is to experiemtn with it.

Let's go over an example:

Adding two numbers together is easy to do, but adding a range of numbers is more complicated. In the following example, recursion is ued to add a range of numbers together by breaking it down into the simple task of adding two numbers:

```cpp

int sum(int k){ //10
  if(k > 0){ // 10 > 0 , yes
    return k + sum(k - 1); // 10 + sum(9) = 10 + 9 + sum(8)
  } else {
      return 0;
  }
}
``````

