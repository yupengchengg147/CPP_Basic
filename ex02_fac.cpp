#include<iostream>
#include<vector>

unsigned int r_factorial(unsigned int n){
    if (n==1){
        return 1;
    }
    return n *  r_factorial(n-1);
}
int main(){
    int n;
    std::cin >> n;
    std::cout << "n!= "<< r_factorial(n) << std::endl;
    return 0;
}