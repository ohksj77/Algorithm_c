#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int d = (a + b) % c;
	int e = ((a % c) + (b % c)) % c;
	int f = (a * b) % c;
	int g = ((a % c) * (b % c)) % c;
	printf("%d\n%d\n%d\n%d", d, e, f, g);
	return 0;
}