#include<iostream>

void goto_demo(){
    int a = 10;
    do {
        if (a == 16){
            ++a;
            continue;
        }
        std::cout << "goto demo value : " << a <<std::endl;
        ++a;
    }while(a < 20);
}

int main(){
    goto_demo();
    return 0;
}