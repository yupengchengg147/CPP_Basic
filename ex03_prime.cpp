#include<iostream>
#include<vector>
#include<cmath>

bool is_prime(unsigned int n){
    if (n < 2){
        return false;
    }
    else{
        for (unsigned int i = 2; i <= static_cast<int>(std::sqrt(n)); i++){
            if (n % i == 0){
                return false;
            }
        }
        return true;

    }
}
int main(){
    unsigned int n;
    std::cin >> n;
    std::cout << is_prime(n) << std::endl;
    return 0;
}