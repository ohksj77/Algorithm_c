#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = -1, b, num, cycle = 0;
	scanf("%d", &num);
	b = num;
	while (a != b) {
		a = (num % 10 * 10) + (num / 10 + num % 10) % 10;
		num = a;
		cycle++;
	}
	printf("%d", cycle);
	return 0;
}