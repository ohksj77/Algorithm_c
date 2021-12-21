#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int array[10], input, result = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		array[i] = input % 42;
	}
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i + 1; j < 10; j++) {
			if (array[i] == array[j])
				count++;
		}
		if (count == 0)
			result++;
	}
	printf("%d", result);
	return 0;
}