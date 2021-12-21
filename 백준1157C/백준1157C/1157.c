#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int cnt = 0, mcnt = 0, str;
	char S[1000000], ma;
	scanf("%s", S);
	str = strlen(S);
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < str; j++) {
			if (S[j] == i || S[j] == i - 32)
				cnt++;
		}

		if (mcnt < cnt) {
			mcnt = cnt;
			ma = i;
			if (ma >= 97)
				ma -= 32;
		}
		else if (mcnt == cnt)
			ma = '?';

		cnt = 0;
	}
	printf("%c", ma);
}