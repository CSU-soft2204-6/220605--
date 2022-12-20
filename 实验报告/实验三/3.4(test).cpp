#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "请输入三角形三条边的边长：" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout << "三角形面积为：" << S(side1, side2, side3) << endl;
	else
		cout << "三角形不存在" << endl;

	return 0;
}