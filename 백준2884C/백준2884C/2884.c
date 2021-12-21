#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int hour, minute;
	scanf("%d %d", &hour, &minute);
	if (minute >= 45) {
		int minute1 = minute - 45;
		printf("%d %d", hour, minute1);
	}
	else if (minute < 45 && hour == 0) {
		int minute2 = minute + 15;
		printf("23 %d", minute2);
	}
	else if (minute < 45 && hour != 0) {
		int minute3 = minute + 15;
		int hour3 = hour - 1;
		printf("%d %d", hour3, minute3);
	}
	return 0;
}