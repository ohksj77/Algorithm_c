#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int array[9], num = 0, result;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &array[i]);
		if (array[i] > num) {
			num = array[i];
			result = i + 1;
		}
	}
	printf("%d\n%d", num, result);
	return 0;
}