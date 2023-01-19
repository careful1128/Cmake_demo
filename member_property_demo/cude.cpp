#include<iostream>
using namespace std;
class Cube
{
public:

	 void setl(int l)
	 {
		C_L = l;
	 }
	 int getl()
	 {
		 return C_L;
	 }

	 void setw(int w)
	 {
		 C_W = w;
	 }
	 int getw()
	 {
		 return C_W;
	 }

	 void seth(int h)
	 {
		 C_H= h;
	 }
	 int geth()
	 {
		 return C_H;
	 }
	
	 //表面积
	 int calculateS()
	 {
		 return 2 * C_L * C_W + 2 * C_L * C_H + 2 * C_W * C_H;
	 }
	 //体积
	 int calculateV()
	 {
		 return C_L * C_W * C_H;
	 }
	 //成员函数判断是否相等
	 bool issamebyClass(Cube &c)
	 {																	
		 if (C_H== c.geth() && C_L == c.getl() && C_W == c.getw())
		 {
			 return true;
		 }
		 return false;
	 }
private:
	int C_L;
	int C_W;
	int C_H;
};
//利用全局函数判断相等
bool issame(Cube &c1, Cube &c2)
{
	if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw())
	{
		return true;
	}
	return false;
}
int main(void)
{
	Cube c1;
	c1.seth(10);
	c1.setl(10);
	c1.setw(10);
	cout << c1.calculateS() << endl;
	cout << c1.calculateV() << endl;

	Cube c2;
	c2.seth(10);
	c2.setl(10);
	c2.setw(10);
	//判断是否相等
	bool ret = issame(c1, c2);
	if (ret)
	{
		cout << "c1和c2相等" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}
	//成员函数判断
	bool ret2 = c1.issamebyClass(c2); 
	if (ret2)
	{
		cout << "利用成员函数,c1和c2相等" << endl;
	}
	else
	{
		cout << "利用成员函数,c1和c2不相等" << endl;
	}
	// system("pause");
	return 0;
}
