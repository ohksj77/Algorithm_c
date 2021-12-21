#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int m, k = 0, sum = 0, array[1000];
		double avr;
		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d", &array[j]);
			sum += array[j];
		}
		avr = sum / m;
		for (int j = 0; j < m; j++) {
			if (array[j] > avr) {
				k++;
			}
		}
		printf("%.3lf%%\n", (double)k / m * 100.0);
	}
	return 0;
}