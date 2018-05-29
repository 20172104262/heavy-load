// test1.cpp : 定义控制台应用程序的入口点。
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
	Cfeet operator -(Cfeet & ojbk);
};
void Cfeet::setvalue(int a,int b)
{
	feet = a - b / 12;
	inch = b%12;
}
void Cfeet::display()
{
	cout << feet << "feet" << inch << "inch" << endl;
}
Cfeet Cfeet::add(Cfeet & ojbk)
{
	Cfeet temp;
	int a,b;
	if (feet >= ojbk.feet)
	{
		if (inch >= ojbk.inch)
			temp.setvalue(feet - ojbk.feet, inch - ojbk.inch);
		else
			temp.setvalue(feet - ojbk.feet - 1, inch + 12 - ojbk.inch);
	}
	else
	{
		a = feet * 12 + inch - ojbk.feet * 12 - ojbk.inch;
		if (a < -12)
				temp.setvalue(a / 12, -(a % 12));
		else
				temp.setvalue(-1, (a % 12) + 12);
		
	}
	return temp;
}
Cfeet Cfeet::operator-(Cfeet & ojbk)
{
	Cfeet temp;
	int a, b;
	if (feet >= ojbk.feet)
	{
		if (inch >= ojbk.inch)
			temp.setvalue(feet - ojbk.feet, inch - ojbk.inch);
		else
			temp.setvalue(feet - ojbk.feet - 1, inch + 12 - ojbk.inch);
	}
	else
	{
		a = feet * 12 + inch - ojbk.feet * 12 - ojbk.inch;
		if (a < -12)
			temp.setvalue(a / 12, -(a % 12));
		else
			temp.setvalue(-1, (a % 12) + 12);

	}
	return temp;
}



int main()
{
	Cfeet A, B, C;
	A.setvalue(1,3);
	B.setvalue(2,2);
	C = A - B;
	C.display();
	return 0;
}

