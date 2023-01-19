#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//vector容器的容量和大小操作
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
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	if (v1.empty())
	{
		cout << "空" << endl;
	}
	else
	{
		cout << "不空" << endl;
	}

	cout << "v1的容量=" << v1.capacity() << endl;
	cout << "v1的大小=" << v1.size() << endl;
	
	//重新指定大小
	v1.resize(15,100);//利用重载版本，可以指定默认填充值，第二个参数
	PrintVector(v1);//如果重新指定的比原来的长，默认用0填充

	v1.resize(5);
	PrintVector(v1);//如果重新指定的比原来短，超出的部分会删除掉
}
int main(void) 
{
	test01();
	// system("pause");
	return 0;
}

