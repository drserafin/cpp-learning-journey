#include<iostream>
#include<vector>

class Solution{

public:
    void printVector(std::vector<int> &numsReference){

        for(int i=0; i<numsReference.size(); i++)
        std::cout<<numsReference[i]<<" ";
      
    };



};

int main(){

  Solution myObject;
  std::vector<int> nums = {1,2,3,4,5};
  myObject.printVector(nums);



  return 0;
}