/*
string赋值操作


string& operator = (const char* s)char*类型字符串 赋值给当前的字符串
string& operator = (const string &s)把字符串s赋给当前的字符串
string& operator = (char c)把字符赋值给当前的字符串
string& assign(const char* s)把字符串s赋值给当前的字符串
string& assign(const char*s,int n)把字符串s的当前n个字符赋给当前的字符串
string& assign(const string &s)把字符串s赋给当前字符串
string& assign(int n,char c)用n个字符c赋给当前字符串
*/


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void test01()
{
	string str1;
	str1 = "hello world";
	cout << "str1=" << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2=" << str2 << endl;
	
	string str3;
	str3 = 'c';
	cout << "str3=" << str3 << endl;

	string str4;
	str4.assign("hello c艹");
	cout << "str4=" << str4 << endl;

	string str5;
	str5.assign("hello c++",5);
	cout << "str5=" << str5 << endl;
	
	string str6;
	str6.assign(str5);
	cout << "str6=" << str6 << endl;

	string str7;
	str7.assign(10, 'w');
	cout << "str7=" << str7 << endl;
}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}


