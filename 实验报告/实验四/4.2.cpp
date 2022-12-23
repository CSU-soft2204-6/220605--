#include<stdio.h>
int main(void) {
	int i, j, t;
	int a[10];
	printf("Please enter ten numbers:\n");
	//从键盘接收需要排序的数并存入数组 
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	//起泡法排序 
	for (j = 0; j < 9; j++) {
		for (i = 0; i < 9 - j; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	//输出排好序的数组 
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}