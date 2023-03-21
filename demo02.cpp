#include<iostream>
#include<vector>

void increment(int value){
    value = value+1;
}
void ref_increment(int& value){
    value = value +1;
}

bool contains(const std::vector<int>& vec, int value){
    for (auto element: vec) {
        if (value == element){
            return true;
        }
    }
    return false;
}

// int main(){
//     int x = 10;
//     increment(x);
//     std::cout << x << std::endl;
//     return 0;
// }
// value in the fun increment is a copy of x;
//----------------------------------------------------------------
int main(){
    // int x = 10;
    // // int& ref_to_x = x;
    // // x = x+1;
    // ref_increment(x);
    // std::cout << x << std::endl;
    std::vector<int> vec01 = {2,4,6,7};
   

    int n = 10;
    int i = 1;
    int sum = 0;
    bool k = false;
    while(i<n){
        k = contains(vec01, i);
        std::cout << "current num:  "<< i << " in vec01? "<<k << std::endl;
        i = i+1;
    }

    return 0;
    }

