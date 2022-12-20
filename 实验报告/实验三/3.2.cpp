#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	if (num <= 1)
		return 0;
	for (i = 2; i < sqrt(num); i++)
	{
		if ((num % i) == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	if (is_prime(n))
		cout << "true" << endl;
	else  cout << "false" << endl;
	return 0;
}