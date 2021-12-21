#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, num1, num2, num3, array[10] = {0,};
	scanf("%d %d %d", &num1, &num2, &num3);
	int result = num1 * num2 * num3;
	while (result > 0) {
		a = result % 10;
		array[a]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", array[i]);
	}
	return 0;
}