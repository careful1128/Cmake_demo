#include <iostream>

#include "class_first.h"

int main(){
    // Demo::Student student("elvin", 20, 100);
    Demo::Student student("Monica"); //实例化一个类的对象
    student.say();
    student.setAge(20)


    Demo::Student* student_2 = new Demo::Student("Gliese", 25, 100);  //创建一个在堆空间的对象，并返回指针
    delete student_2;//智能指针来解决 new 内存容易泄露的问题db2
    

    std::cout << "size of student : " << sizeof(student) <<std::endl;020

    return 0;


}