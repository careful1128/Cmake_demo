/** 
protected 可以修饰一个类里面的成员函数和成员变量
protected 修饰的变量/函数 实例化对象不能访问，但这个类的子类/派生类是可以访问的
*/


// public private protected : 1. 放到类里 2. 放到类的继承关系里
// 继承关系里的上述限定符的作用： 对继承而来的成员函数外加一个限定


// 理解三种over ： overwrite（覆盖），cverload（重载），overide


#include <iostream>

class Shape {
public :
    void setWidth(int width) { width_ = width; }
    void setHeight(int height){ ( height_ = height;)}
    void getCost() {
        std::cout << "we are in shape :: getcost()" << std::endl;
    }
protected:
    int width_ = 10;
    int height_ = 10;
};
