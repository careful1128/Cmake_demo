#include<iostream>
#include<string>
using namespace std;


template<class NameType, class AgeType = int>//默认参数
class Person
{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowPerson()
	{
		cout << this->m_Name << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

//类模板没有自动类型推导的使用方式
void test01()
{
	//Person p("李四", 13);
	Person<string,int>p("李四", 13);//只能用显示指定类型
	p.ShowPerson();
}

//类模板在模板参数列表中可以有默认参数
void test02()
{
	Person<string>p2("张三", 13);
    p2.ShowPerson();
}
int main()
{
	test01();
    test02();
	// system("pause");
	return 0;
}

