# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
	double h;
	cout << "�����뻪�϶ȣ�";
	cin >> h;
	cout << "���϶��ǣ�" << setprecision(2) << setiosflags(ios::fixed) << ((5.0 / 9.0) * (h - 32.0)) << endl;
	return 0;
}