/*
#include<iostream>
#include<string>
using namespace std;
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//如果想扩展新的功能，需要修改原码
		//在真实的开发中，实行开闭原则，对扩展进行开放，对修改进行关闭
	}
	int m_Num1;
	int m_Num2;
};
void test()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
}
int main(void)
{
	test();
	system("pause");
	return 0;
}
*/



/************************多态的方法*********************/

#include<iostream>
#include<string>
using namespace std;

//利用多态实现计算器
//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{

		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test()
{
	//多态使用条件
	//父类指针或者引用指向子类对象
	//加法
	AbstractCalculator* abc = new AddCalculator;//父类指针指向子类对象
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//堆区数据，手动开辟手动释放
	delete abc;//堆区的数据被销毁了，但是指针的类型没有变
	// 减法
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}
int main(void)
{
	test();
	system("pause");
	return 0;
}


/*

多态带来的好处

组织结构清晰，哪出错了马上定位到。
可读性强
对于前期和后期扩展以及维护性高

C++开发提倡利用多态设计程序框架，因为多态优点很多。

父类指针指向子类对象(多态的条件)

*/
