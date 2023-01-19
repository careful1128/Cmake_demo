/*
菱形继承
*   ************ A
*              /   \
*             B     C
*             \     /
*                D
*/

#include<iostream>

using namespace std;

class A {
public:
void fun() {
    std::cout << "we are in class A !!!" << std::endl;
}
protected:
    int base_;
};

// class B: virtual public A {
class B: public A {
protected:
    int b_;
};

// class C: virtual public A {
class C: public A {
protected:
    int c_;
};

class D: public B, public C {
protected:
    int d_;
};

int main () {
    D d;
    d.B::fun();
    // B b;
    // b.fun();
    // D d;
    // d.fun();
    return 0;
}