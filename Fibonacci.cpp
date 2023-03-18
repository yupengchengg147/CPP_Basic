#include <iostream>
#include <vector>

int fbn(int n){
    int n0 = 0;
    int n1 = 1;
    
    //index from 0;
    for (int i = 1; i < n; i++) {

        int t = n1;
        n1 = n0 + n1;
        n0 = t;
    }
    return n1;
}

int main(){
    std::cout << "enter n"<<std::endl;
    int n;
    std::cin >> n;
    std::cout << "the n-th F is "<< fbn(n) <<std::endl;
    return 0;
}
// 0 1 1 2 3 5 8 13
// 0 1 2 3 4 5 6 7 " index from 0"
//第n个数，需要执行n-1次加法;