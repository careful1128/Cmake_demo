#include<iostream>
using namespace std;
int& test1()
{
	int a = 10;//栈区
	return a;
}
int& test2()
{
	static int b = 20;//静态变量存放在全局区，全局区的数据在程序结束后系统释放
	return b;
}
int main(void)
{
	int& ret = test1();
	int& ret2 = test2();
	cout << ret2 << endl; 
	//作为左值
	test2() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
	cout << ret2 << endl;
	cout << ret << endl;//第一次结果正确是因为编译器做了保留
	cout << ret;//第二次结果错误是因为a的内存已经释放
	return 0;
}
