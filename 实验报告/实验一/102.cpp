#include<iostream>
#define Pi 3.1415926535
using namespace std;
int main()
{
	double r, h, v;
	cout << "ÇëÊäÈëÔ²×¶µ×Ãæ°ë¾¶ºÍ¸ß£º" << endl;
	cin >> r >> h;
	v = r * r * h * Pi;
	v = v / 3;
	cout << v << endl;
	return 0;
}