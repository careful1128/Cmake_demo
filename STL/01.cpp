/*    类模板中的成员函数创建实际       
*
*类模板中的成员函数要在调用的时候才创建
*/



#include<iostream>
#include<string>
using namespace std;

//类模板中的成员函数在调用时才去创建
class Person1 
{
public:
	void showPerson1()
	{
		cout << "Person show1" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person show2" << endl;
	}
};
template<class T>
class MyClass
{
public:
	T obj;
	//类模板中的成员函数
	void func1()
	{
		// obj.showPerson1();
	}
	void func2()
	{
		// obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person2>m;
	m.func1();
	m.func2();
}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}



