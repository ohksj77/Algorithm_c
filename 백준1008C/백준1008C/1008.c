#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double a, b;
	scanf("%lf", &a);
	scanf("%lf", &b);
	double c = a / b;
	printf("%.10lf", c);
	return 0;
}