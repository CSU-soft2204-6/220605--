#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char c;
	cout << "输入运算符：+、-、*、/ : ";
	cin >> c;
	cout << "输入两个数: ";
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
				cout << "error! 被除数不能为零。";
				break;
			}
			else
			{
				cout << a / b;
				break;
			}
		default:
			cout << "error! 请输入正确运算符。";
			break;
	}
	return 0;
}