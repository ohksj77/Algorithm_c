#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int n, sum, add, str;
	char array[81];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = 0, add = 1;
		scanf("%s", array);
		str = strlen(array);
		for (int j = 0; j < str; j++) {
			if (array[j] == 'O') {
				sum += add;
				add++;
			}
			else
				add = 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}