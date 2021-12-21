#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	for (int i = 0; i < num1; i++) {
		int a;
		scanf("%d", &a);
		if (a < num2) {
			printf("%d ", a);
		}
	}
	return 0;
}