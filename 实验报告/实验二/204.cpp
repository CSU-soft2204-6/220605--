#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char c;
	cout << "�����������+��-��*��/ : ";
	cin >> c;
	cout << "����������: ";
	cin >> a >> b;
	switch (c)
	{
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			if (b == 0)
			{
				cout << "error! ����������Ϊ�㡣";
				break;
			}
			else
			{
				cout << a / b;
				break;
			}
		default:
			cout << "error! ��������ȷ�������";
			break;
	}
	return 0;
}