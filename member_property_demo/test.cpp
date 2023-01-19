/*
成员属性设置为私有

优点1：将所有成员属性设置为私有，可以自己控制读写权限。

优点2：对于写权限，我们可以检测数据的有效性。
*/

#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		p_name = name;
	}
	//获取姓名
	string getName()
	{
		return p_name;
	}

	//获取年龄
	int getAge()
	{

		return p_age;
	}
	
	string getLover() {
		
		return lover;
	}
	//设置年龄
	void setAge(int age)
	{

		p_age = age;
		if (age < 0 || age >150)
		{
			p_age = 0;
			cout << "什么鬼" << endl;
			return;
		}
	}
	//设置伙伴
	void setLover(string lname)
	{
		lover = lname;
	}

private:
	//姓名 可读可写
	string p_name;
	//年龄 可读可写加个范围
	int p_age;
	//伙伴  只写
	string lover;
};

int main(void)
{
	Person p1;
	p1.setName("张三");
	cout << "姓名:" << p1.getName() << endl;
	p1.setAge(18);
	cout << "年龄:" << p1.getAge() << endl;
	p1.setLover("赵四");
	cout << "伙伴:" << p1.getLover() << endl;
	return 0;
}
