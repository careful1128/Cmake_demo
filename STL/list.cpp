/*
list基本概念
功能：将数据进行链式存储

链表(list)：是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接来实现的。

链表的组成：链表由一系列结点组成。

结点的组成：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域。

SLT中的链表是一个双向循环链表。


*/

#include<iostream>
#include<list>
using namespace std;
void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	PrintList(l1);

	list<int>l2(l1.begin(), l1.end());
	PrintList(l2);


	list<int>l3(l2);
	PrintList(l3);
	
	list<int>l4(10, 100);
	PrintList(l4);
}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}

