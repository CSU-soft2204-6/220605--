#include <stdio.h>
using namespace std;
int main()
{
	char c;
	int letters = 0, space = 0, number = 0, other = 0;
	printf("������һ���ַ���");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			letters++;
		}

		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			number++;
		}
		else
		{
			other++;
		}
	}
	printf("��ĸ��:%d\n�ո���:%d\n������:%d\n�����ַ�:%d\n", letters, space, number, other);
	return 0;
}