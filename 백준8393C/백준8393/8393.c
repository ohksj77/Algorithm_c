#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, num1 = 0;
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		num1 += i;
	}
	printf("%d", num1);
	return 0;
}