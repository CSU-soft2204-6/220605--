#include<iostream>
using namespace std;
int main()
{
	float x;
	cin >> x;
	if (0 < x && x < 1)
	{
		cout << 3 - x * 2 << endl;
	}
	if (x >= 1 && x < 5)
	{
		cout << 0.5 / x + 1 << endl;
	}
	if (x >= 5 && x < 10)
	{
		cout << x * x << endl;
	}
	return 0;
}