/*
string容器
string基本概念
本质：

string是C++风格的字符串，而string本质上是一个类
string和char*区别：

char*是一个指针
string是一个类，类内部封装了char*,管理者个字符串，是一个char&型的容器
特点：
strint类内部封装了很多成员方法

例如;查找find,拷贝copy,删除delete,替换replace,插入insert

string管理char*所分配的内存，不用但是赋值越界和取值越界等，由类内部进行负责

*/
/*
string构造函数
构造函数原型

string()创建一个空的字符串
string(const char* s)使用字符串s初始化
string(const string& str)使用一个string对象初始化另一个string对象
string(int n,char c)使用n个字符c初始化

*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//string的构造函数
void test01()
{
	string s1;//默认构造
	const char* str = "hello world  xiaoxin";
	string s2(str);
	cout << "s2："<<s2 << endl;

	string s3(s2);
	cout << "s3" << s3 << endl;
}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}



