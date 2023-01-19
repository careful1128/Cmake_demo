#include<iostream>
#include<string>
using namespace std;
//类模板
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	void showPerson()
	{
		cout << this->m_Name << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
void test01()
{
	// <>中是模板的参数列表
	Person<string, int>p1("张三",10);
	p1.showPerson();
}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}

