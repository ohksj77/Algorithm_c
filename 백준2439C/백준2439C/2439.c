#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	for (int i = num; i != 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			printf(" ");
		}
		for (int k = i; k < num + 1; k++) {
			printf("*");
		}
		if (i != 1) {
			printf("\n");
		}
	}
	return 0;
}