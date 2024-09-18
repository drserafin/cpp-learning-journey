## Range-Base for Loop

A range base for loop is a type of loop introduced in C++11 that allows you to iterate over a sequence of values without the need for an index or iterator.

<b> Syntax </b>

```cpp
for ( range_declartion : range_expression){
  //loop body
}
``````

<b>Component</b>
* range_declartion: The varable declared to hold each element in the sequence
* range_expression: The sequence of values to iterate over (e.g array, vector, string)

```cpp
int arr[] = {1,2,3,4,5};
for (int x : arr){
  std::cout << x << " ";
}
``````
Output: 
1 2 3 4 5

