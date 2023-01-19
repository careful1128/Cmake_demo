#include<iostream>

using namespace std;

//  真正用的时候，会做一个型别的推导  
template<typename P>
void swap(P* a, P* b) {
    P temp = *a;
    *a = *b;
    *b = temp; 
}

int main(){
    int n_1 = 10;
    int n_2 = 20;
    swap(&n_1, &n_2);
    std::cout << "n_1 value : " << n_1  << std::endl;
    std::cout << "n_2 value : " << n_2  << std::endl;
    return 0;
}