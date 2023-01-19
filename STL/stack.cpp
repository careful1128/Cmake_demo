/*
栈

入栈——push
出栈——pop
返回栈顶——top
判断栈是否为空——empty
返回栈大小——size
*/

#include<iostream>
#include<stack>
using namespace std;
void test01()
{
	stack<int>s;
	//入栈
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout << "栈的大小:" << s.size() << endl;
	//只要栈不为空，就查看栈顶，并且执行出栈操作
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	cout << "栈的大小:" << s.size()<< endl;
}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}

