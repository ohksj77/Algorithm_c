#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int o;
	double n = 0, m = 0, array[1000];
	scanf("%d", &o);
	for (int i = 0; i < o; i++) {
		scanf("%lf", &array[i]);
		if (array[i] > m) {
			m = array[i];
		}
	}
	for(int j = 0; j < o; j++){
		array[j] = array[j] / m * 100.0;
		n += array[j];
	}
	double average = n / (double)o;
	printf("%lf", average);
	return 0;
}