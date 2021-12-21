#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, num1, num2;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d\n", i, num1 + num2);
	}
	return 0;
}