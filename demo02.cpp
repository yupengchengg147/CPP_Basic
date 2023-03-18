#include<iostream>
#include<vector>

void increment(int value){
    value = value+1;
}
void ref_increment(int& value){
    value = value +1;
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
    int x = 10;
    // int& ref_to_x = x;
    // x = x+1;
    ref_increment(x);
    std::cout << x << std::endl;
    return 0;
    }
    