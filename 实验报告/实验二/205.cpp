#include <stdio.h>
using namespace std;
int main()
{
	char c;
	int letters = 0, space = 0, number = 0, other = 0;
	printf("请输入一行字符：");
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
	printf("字母数:%d\n空格数:%d\n数字数:%d\n其他字符:%d\n", letters, space, number, other);
	return 0;
}