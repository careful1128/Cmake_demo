#include <chrono>
#include <iomanip>
#include <iostream>

using namespace std;

void time_stamp() {
    std::time_t t = std::time(nullptr);
    std::cout << "we are in time_stamp" <<std::endl;
    std::cout << std::put_time(std::localtime(&t), "%Y-%m-%d %H:%M:%S") << std::endl;
    return;
}