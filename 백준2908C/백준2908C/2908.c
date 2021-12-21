#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int first, second;
	int f, s;
	scanf("%d %d", &first, &second);
	f = first / 100 + ((first / 10) % 10) * 10 + ((first % 100) % 10) * 100;
	s = second / 100 + ((second / 10) % 10) * 10 + ((second % 100) % 10) * 100;
	if (f < s)
		printf("%d", s);
	else
		printf("%d", f);
	return 0;
}