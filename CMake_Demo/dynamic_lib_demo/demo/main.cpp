// void time_stamp();
#include <iostream>

// 用户写的
#include "so_demo.h"

float add(float a, float b);

int main() {
    time_stamp();
    // sleep_fun(2);
    std::cout << "add result is : " << add(22.0, 12.0) << std::endl;
    return 0;
}
