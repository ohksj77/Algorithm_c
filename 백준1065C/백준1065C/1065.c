#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int hansu(int num) {
	int count = 0;
	for (int i = 1; i < num + 1; i++) {
		if (i < 100)
			count++;
		else if (i < 1000) {
			if (i / 100 - (i % 100) / 10 == (i % 100) / 10 - ((i % 100) % 10))
				count++;
		}
	}
	return count;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", hansu(n));
	return 0;
}