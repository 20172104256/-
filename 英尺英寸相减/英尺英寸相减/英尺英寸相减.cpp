// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inch;
public:
	void setvalue(int fe, int in);
	void display();
	//CFeet add(CFeet & oc1);
	CFeet operator - (CFeet & oc1);
	CFeet  minus(CFeet & oc1);
};
void CFeet::setvalue(int fe, int in) {
	feet = fe - 1;
	inch = in + 12;
}
void CFeet::display() {
	cout << feet << "英尺" << inch << "英寸" << endl;
}
/*CFeet CFeet::add(CFeet & oc1) {
CFeet temp;
temp.setvalue(feet + oc1.feet, inch + oc1.inch);
return temp;
}*/
CFeet CFeet::minus(CFeet & oc1) {
	CFeet temp;
	temp.setvalue(feet - oc1.feet, inch - oc1.inch);
	return temp;
}
CFeet CFeet::operator - (CFeet & oc1) {
	CFeet temp;
	temp.setvalue(feet - oc1.feet, inch - oc1.inch);
	return temp;
}


int main()
{
	CFeet A, B, C;
	A.setvalue(2, 1);
	B.setvalue(1, 2);
	C = A - B;
	C.display();
	return 0;
}