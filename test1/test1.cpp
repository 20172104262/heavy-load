// test1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Cfeet
{
private:
	int inch;
	int feet;
public:
	void setvalue(int a, int b);
	void display();
	Cfeet add(Cfeet & ojbk);
	Cfeet operator +(Cfeet & ojbk);
};
void Cfeet::setvalue(int a,int b)
{
	feet = a + b / 12;
	inch = b%12;
}
void Cfeet::display()
{
	cout << feet << "feet" << inch << "inch" << endl;
}
Cfeet Cfeet::add(Cfeet & ojbk)
{
	Cfeet temp;
	temp.setvalue(feet + ojbk.feet, inch + ojbk.inch);
	return temp;
}
Cfeet Cfeet::operator+(Cfeet & ojbk)
{
	Cfeet temp;
	temp.setvalue(feet + ojbk.feet, inch + ojbk.inch);
	return temp;
}



int main()
{
	Cfeet A, B, C;
	A.setvalue(12, 13);
	B.setvalue(42, 2);
	C = A + B;
	C.display();
	return 0;
}

