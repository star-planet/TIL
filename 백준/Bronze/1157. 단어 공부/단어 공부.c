#include <stdio.h>
#include <string.h>

int main(void) {
	char s[1000001];
	scanf("%s", &s);
	int len = strlen(s);
	int chk[26] = { 0 , };

	int max = 0;
	char ret = '?';

	for (int i = 0; i < len; i++) {
		if (s[i] <= 'Z')
			chk[s[i] - 'A']++;
		else
			chk[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (chk[i] > max) {
			max = chk[i];
			ret = 'A' + i;
		}
		else if (chk[i] == max) {
			ret = '?';
		}
	}
	printf("%c", ret);
}