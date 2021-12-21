#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;
	printf("%d\n%d\n%d\n%d\n%d", c, d, e, f, g);
	return 0;
}