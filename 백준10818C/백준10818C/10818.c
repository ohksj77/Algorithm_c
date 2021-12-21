#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m, min = 1000001, max = -1000001;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m < min) {
			min = m;
		}
		if (m > max) {
			max = m;
		}
	}
	printf("%d %d", min, max);
	return 0;
}