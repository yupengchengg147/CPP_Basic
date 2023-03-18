#include<iostream>
#include<vector>

void get_input_and_append(std::vector<std::string>& in_vec, std::string s_input){
    in_vec.push_back(s_input);
}
int main(){
    std::vector<std::string> vec;
    std::string s_input;

    while(true){
        std::cin >> s_input;
        if(s_input == "quit"){
            break;
        }
        get_input_and_append(vec, s_input);
    }
    int i=0;
    for(auto elem : vec){
        
        std::cout << "value: "<<elem <<" index: "<< i << std::endl;
        i += 1;
    }
}