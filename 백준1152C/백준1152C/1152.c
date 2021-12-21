#include<stdio.h>
#include<string.h>

int main() {
	char str[1000001];
	fgets(str, 1000001, stdin);
	int cnt = 1;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ' && str[i - 1] == ' ')
			continue;
		else if (str[i] == ' ')
			cnt++;
	}
	if (str[0] == ' ') cnt--;
	if (str[len - 2] == ' ') cnt--;
	printf("%d", cnt);
	return 0;
}