#include <unistd.h>
#include <iostream>

void sleep_fun(int sleep_time) {
    std::cout << "sleep : " << sleep_time << "seconds" << std::endl;
    sleep(sleep_time);
    return;
}