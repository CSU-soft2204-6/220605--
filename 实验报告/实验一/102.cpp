#include<iostream>
#define Pi 3.1415926535
using namespace std;
int main()
{
	double r, h, v;
	cout << "������Բ׶����뾶�͸ߣ�" << endl;
	cin >> r >> h;
	v = r * r * h * Pi;
	v = v / 3;
	cout << v << endl;
	return 0;
}