#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//vector赋值
void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10;i++)
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	//赋值 operator= 
	vector<int>v2;
	v2 = v1;
	PrintVector(v2);

	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());//闭 开
	PrintVector(v3);

	//n个elem方式赋值
	vector<int>v4;
	v4.assign(10, 100);//10个100
	PrintVector(v4);
}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}

