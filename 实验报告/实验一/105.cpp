# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
	double h;
	cout << "请输入华氏度：";
	cin >> h;
	cout << "摄氏度是：" << setprecision(2) << setiosflags(ios::fixed) << ((5.0 / 9.0) * (h - 32.0)) << endl;
	return 0;
}