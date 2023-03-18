#include<iostream>
#include<vector>

int main() {
    // const double pi = 3.14;
    // std::cout << "yu demo 01 \n";
    // // pi = 3.14159
    // ------------------------------------------------
    // int i = 15;
    // std::string output = "";
    // if (i % 3 == 0) {
    //     output += "Fizz";
    // }
    // if (i % 5 == 0) {
    //     output += "Bizz";

    // }
    // std::cout << output << std::endl;
    // ----------------------------------------------------------------
    // int x = 0;
    // int z;
    // auto y = 3.5;
    // int x = 3 * 8.1;
    // float y = static_cast<float>(4);
    // std::cout <<"y="<<y << std::endl;

    // variables are valid from declaration to }
    //----------------------------------------------------------------
    // int sum = 0;
    // for (int i = 1; i <5; i++) {
    //     sum += i;
    //     std::cout << "sum="<<sum << std::endl;
    // }
    //----------------------------------------------------------------
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    
    int x = 105;
    std::cout << "vec_size="<< vec.size() << std::endl;
    // for (auto x : vec){
    //     std::cout << x << std::endl;
    // }
    for (int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << std::endl;
    }
    std::cout << "x=" << x << std::endl;
}
