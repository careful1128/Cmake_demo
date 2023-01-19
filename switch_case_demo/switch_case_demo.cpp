#include <iostream>

void switch_case_demo(char grade){
    // char grade = 'D';
    switch(grade){
    case 'A':
        std::cout << "very good" << std::endl;
        break;
    case 'B':
    case 'C':
        std::cout << "passed" << std::endl;
    case 'D':
        std::cout << "Failed" << std::endl;
    default:
        std::cout << "invaild" << std::endl;
    }
}

int main(){
    char grade = 'D';
    switch_case_demo(grade);
    return 0;
}