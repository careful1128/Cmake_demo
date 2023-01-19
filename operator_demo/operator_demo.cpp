#include<iostream>

void size_of_demo(){
    int a = 10;
    std::cout << "size of int : " << sizeof(int) << std::endl;
    std::cout << "size of a : " << sizeof(a) << std::endl;
    return;
}

int condition_demo(int a){
    return (a == 5) ? 5 : 0;
}

int main(){
    size_of_demo();
    // condition_demo();
    std::cout << "result of condition demo is : " << condition_demo(5) << std::endl;
    return 0;
}