/*
了解STL中的容器 算法 迭代器 
STL中最常用的容器为Vector->数组
容器中插入数据、并遍历这个容器

Vector存放内置数据类型
容器:vector

算法:for_each

迭代器:vector::iterator
*/

#include<iostream>
#include<vector>
#include<algorithm>  // 标准算法头文件

using namespace std;
void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
    //创建一个vector容器->数组
    vector<int>v;
    //向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 通过迭代器来访问容器中的数据
    vector<int>::iterator itBegin = v.begin();  //起始迭代器，指向容器中的第一个元素
    vector<int>::iterator itEnd = v.end();  //结束迭代器，指向容器中的最后一个元素
	//第一种遍历方式 
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第二种遍历方式
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/


	//第三种遍历方式 利用STL提供遍历算法
	for_each(v.begin(), v.end(), myPrint);


}
int main(void)
{
	test01();
	// system("pause");
	return 0;
}
