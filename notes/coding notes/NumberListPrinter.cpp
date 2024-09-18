#include<iostream>
#include<vector>

int main(){

    std::vector<int> numbers = {10,54,12,43,99,100,75};
    int count = 1;

    for (int i = 0; i < numbers.size(); i++){
            std::cout << count << ":" << numbers[i] << std::endl;
            count = count + 1; //count = count + 1
        }

    return 0;
}

/*Goal is to output:
1. 10
2. 54
3. 12 
etc */