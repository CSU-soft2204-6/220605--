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
	cout << "�� " << (m - 1) << " ��\n" << "�����ѣ�" << sum << " Ԫ" << endl;
	cout << "ƽ��ÿ�컨��" << aver << " Ԫ" << endl;
	return 0;
}