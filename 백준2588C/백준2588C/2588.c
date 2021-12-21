#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	int b1 = b % 10;
	int b2 = (b % 100) / 10;
	int b3 = b / 100;
	int num4 = a * b1;
	int num5 = a * b2;
	int num6 = a * b3;
	int num7 = a * b;
	printf("%d\n%d\n%d\n%d", num4, num5, num6, num7);
	return 0;
}