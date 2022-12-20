# include<stdio.h>
int main()
{
	char letter;
	scanf_s("%c", &letter);
	((letter >= 'a') && (letter) <= 'z') ? (letter = letter + 'A' - 'a') : (letter = letter + 1);
	printf("%c", letter);
	return 0;
}