#include<iostream>
using namespace std;
int main()
{
	int i;
	double p = 0.8, sum, aver, m;
	sum = 0;
	m = 1;
	for (i = 2; i <= 100; i = i * 2)
	{
		sum = sum + p * i;
		aver = sum / (m);
		m++;
	}
	cout << "共 " << (m - 1) << " 天\n" << "共花费：" << sum << " 元" << endl;
	cout << "平均每天花：" << aver << " 元" << endl;
	return 0;
}