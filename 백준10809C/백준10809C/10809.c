#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char S[101];
	int array[26], save;
	scanf("%s", S);
	save = strlen(S);
	for (int i = 0; i < 26; i++) array[i] = -1;
	for (int j = 0; j < save; j++) {
		if (array[S[j] - 97] == -1) array[S[j] - 97] = j;
	}
	for (int k = 0; k < 26; k++) printf("%d ", array[k]);
	return 0;
}