#include <iostream>
#include "class_first.h"

namespace Demo {
Student::Student(const char* name , int age, float score) : name_(name), age_(age), score_(score) {
    // std::cout << "===================== start construct fun =============" << std::endl;
    // std::cout << "===================== end construct fun ===============" << std::endl;
}

int Student::total = 10; // 静态成员变量，在外面定义

void Student::setName(const char* name){
    this -> name = name;
}

void Student::say(){
    std::cout << name_ << "age is : " << this -> age_ << std::endl;
    std::cout << "this prt : " << this << std::endl;
    _sort();
}

void Student::setScore(){
    score_ = score ;
}

void Student::_sort(){
    std::cout << "sort" << std::endl;
}
}