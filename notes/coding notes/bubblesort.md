# Simple Bubble Sort 

```cpp

#include<iostream>
#include<vector>

int main(){

std::vector<int> numbers = {1,123,124,124,12,412,11,12,4,124,1,24};

for (int i = 0; i < numbers.size(); i++){
  for (int j = i + 1; j < numbers.size(); j++){
    if (numbers[j] < numbers[i]){
      int tempNum = numbers[i];
      numbers[i] = numbers[j];
      numbers[j] = tempNum;
    }
  }
}

for (int k = 0; k < numbers.size(); k++){
  std::cout << numbers[k] << std::endl;
};


  return 0;
}


``````