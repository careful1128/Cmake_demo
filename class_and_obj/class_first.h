// #pragma once

#ifndef CLASS_FIRST_
#define CLASS_FIRST_
// c++ 类
// struct : 很少有成员函数  class : 有大量成员函数
// 类的名字尽量首字母大写 
// public private protected 三种权限
// 类的声明写在一个 头文件里


class Student {
// 成员函数
public:
  // 默认构造函数
  Student() = default;
  Student(const char* name, int age, float score); // 构造函数的声明
  Student(const char* name) : name_(name) {}

  ~Student();
public:
  int getAge() { return age_; }
  void setAge(int age) { age_ = age; } // 在类中定义 --> 内联函数
  
  void setName(const char* name); // 成员函数的声明

  void say(); // 在外面进行定义

  static int getTotal();

protected: // protected 继承的时候与private的区别就展现出来了
  void setScore(float score);

private:
  void _sort();

// 成员变量 --> 通常是私有的
public:
   static int total;

private:
    const char* name_ = nullptr;
    int age_ = 0;
    float score_ = 0;
};



#endif