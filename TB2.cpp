#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int t, a=0, b=0, c=0, d=0, e=0,f=0;
	cout << "请输入不高于五位数的正整数" << endl;
	cin >> t;
	if (t >= 10000)
		a = t / 10000,
		t = t - a * 10000;
	if (t >= 1000)
		b = t / 1000,
		t = t - b * 1000;
	if (t >= 100)
		c = t / 100,
		t = t - c * 100;
	if (t >= 10)
		d = t / 10,
		t = t - d * 10;
	e = t;
	//////////////位数和倒序//////////////
	if (a != 0)
		f = 5, t = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
	else if (b != 0)
		f = 4, t = e * 1000 + d * 100 + c * 10 + b;
	else if (c != 0)
		f = 3, t = e * 100 + d * 10 + c;
	else if (d != 0)
		f = 2, t = e * 10 + d;
	else if (e != 0)
		f = 1, t = e;
	else
		f = 0, t = 0;
	///////////////输出部分///////////////
	cout << "这个数是" << f << "位数" << endl << "=====================" << endl;
	cout << "第一位：" << e << endl << "第二位：" << d << endl << "第三位：" << c << endl
		<< "第四位：" << b << endl << "第五位：" << a << endl;
	cout << "=====================" << endl << "该数逆序输出为：" << t << endl;
    return 0;
}

