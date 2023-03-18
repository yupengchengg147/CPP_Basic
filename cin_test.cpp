#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec;
    int in_current = 0;

    while(std::cin >> in_current){
        vec.push_back(in_current);
        if (vec.size()> 6){
            break;
        }
    }
    int i = 0;
    for (auto elem : vec){
        
        std::cout << "value:"<<elem <<" index: "<< i << std::endl;
        i += 1;
    }
    return 0;
}