/*
*        模板类与友元
*  
*
*/

#include<iostream>
#include<string>
using namespace std;
//通过全局函数打印Person的信息

//提前让编译器知道Person类的存在
template<class T1, class T2 >
class Person;
//类外实现
template<class T1, class T2>
void PrintPerosn2(Person<T1, T2>p)
{
	cout << "类外实现" << p.m_Name << p.m_Age < endl;
}


template<class T1,class T2 >
class Person
{
	//全局函数类内实现
	friend void PrintPerosn(Person<T1,T2>p)
	{
		cout << p.m_Name << p.m_Age << endl;
	}

	//全局函数类外实现
	//加空模板参数列表
	//如果全局函数 是类外实现 需要让编译器提前知道这个函数的存在
	friend void PrintPerosn2<>(Person<T1, T2>p);


public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
		
	}
private:
	T1 m_Name;
	T2 m_Age;
};

void test01()
{
	Person<string, int>p("wxg", 12);
	PrintPerosn(p);
}
void test02()
{
	Person<string, int>p2("年轻人", 18);
    PrintPerosn(p2);
}
int main(void)
{
	test01();
    test02();
	// system("pause");
	return 0;
}

