#include <stdio.h>

//将十六进制的字符串转换成整数  
int htoi(char* str)
{
	int n = 0;
	if (str == NULL) return -1;
	if (*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X'))
	{
		str += 2;
	}
	while (1)
	{
		if (*str >= '0' && *str <= '9')
		{
			n = 16 * n + (*str - '0');
		}
		else if (*str >= 'A' && *str <= 'F')//十六进制还要判断字符是不是在A-F或者a-f之间
		{
			n = 16 * n + (*str - 'A' + 10);
		}
		else if (*str >= 'a' && *str <= 'f')
		{
			n = 16 * n + (*str - 'a' + 10);
		}
		else
		{
			break;
		}
		str++;
	}
	return n;
}

int main(void)
{
	char str1[] = "0XAAAAB";
	int data = 0;
	data = htoi(str1);
	printf("%s\r\n", str1);
	printf("data=%d\r\n", data);
	return 0;
}
