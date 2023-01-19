#include "my_math.h"
#include <iostream>

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

int main() {
    std::cout << "================" << add(5, 7) << std::endl;
    return 0;
}
