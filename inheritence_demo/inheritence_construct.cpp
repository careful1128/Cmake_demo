/**
* 存在继承关系的话，构造函数的顺序：先构造父类；再构造子类（派生类）
*
* 析构的时候：先析构子类（派生类），再析构父类（基类）
*
*/



#include <iostream>

class People {
public:
    People(const char* name, int age) : name_(name), age_(age) {}
protected:
    const char* name_ = nullptr;
    int age_;
};

class Student: public People{
public:
    Student(const char* name, int age, float score);    
    void display();

private:
    float score = 0.0;
    
};

Student::Student(const char* name, int age, float score) : People(name, age), score_(score) {}

void Student::display() {
    std::cout << name_ << "年龄是 ： " << age_ << "分数是：" << score_ << std::endl; 
}

int main() {
    Student student{"xiaoxin", 20, 100};
    student.display();
    return 0;

}