/*
功能：
双端数组，可以对头端进行插入删除操作

deque与vector区别:

vector对于头部的插入删除效率低，数据量越大，效率越低
deque相对而言，对头部的插入删除速度会比vector快
vector访问元素时的速度会比deque快，这和两者内部实现有关

*/

#include<iostream>
#include<deque>
using namespace std;
void PrintDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	PrintDeque(d2);

	deque<int>d3(10, 100);
	PrintDeque(d3);

	deque<int>d4(d3);
	PrintDeque(d4);
}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}

