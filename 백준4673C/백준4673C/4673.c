#include <stdio.h>
int nonselfnum(int num) {
	int sum = num;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() {
	int a[10001], check;
	for (int i = 1; i <= 10001; i++) {
		check = nonselfnum(i);
		if (check < 10001)
			a[check] = 1;
	}
	for (int j = 1; j <= 10000; j++) {
		if (a[j] != 1) {
			printf("%d\n", j);
		}
	}
	return 0;
}