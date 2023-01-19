/*
Vector存放自定义数据类型
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>//标准算法的头文件
using namespace std;

//vector中存放自定义数据类型
class Person
{
public:
	Person(string name,int age )
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age; 
};
void test01()
{
	vector<Person>v;
	Person p1("a1", 10);
	Person p2("a2", 10);
	Person p3("a3", 10);
	Person p4("a4", 10);
	Person p5("a5", 10);
	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);


	//遍历容器中的数据
    // 此处重点看看 遍历写法
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "姓名:" << (*it).m_Name << "年龄:" << (*it).m_Age << endl;
		cout << "姓名:" << it->m_Name << "年龄:" << it->m_Age << endl;
	}
}

//存放自定义数据类型的指针
void test02()
{
	vector<Person*>v;
	Person p1("a1", 10);
	Person p2("a2", 10);
	Person p3("a3", 10);
	Person p4("a4", 10);
	Person p5("a5", 10);
	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);


	// 遍历迭代器
    // 此处放的为指针
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名:" << (*it)->m_Name << "年龄:" << (*it)->m_Age << endl;
	}
}
int main(void)
{
	test01();
	test02();
	// system("pause");
	return 0;
}

