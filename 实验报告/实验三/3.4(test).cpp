#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "�����������������ߵı߳���" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout << "���������Ϊ��" << S(side1, side2, side3) << endl;
	else
		cout << "�����β�����" << endl;

	return 0;
}