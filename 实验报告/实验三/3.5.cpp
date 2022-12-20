#include<iostream>
using namespace std;
int main()
{
	int a, i;
	a = 1;
	for (i = 1; i <= 9; i++)
	{
		a = (a + 1) * 2;
	}
	a = a++;
	cout << a << endl;
	return 0;
}