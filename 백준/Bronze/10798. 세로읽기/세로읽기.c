#include <stdio.h>

int main() {
	char str[16] = { '\0', };
	char arr[5][16] = {'\0', };
	for (int i = 0; i < 5; i++) {
		scanf("%s", str);
		for (int j = i; j < i+1; j++) {
			for (int k = 0; k < 15; k++) {
				if (str[k] == '\0') break;
				else arr[j][k] = str[k];
			}
		}
	}

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == '\0') continue;
			else printf("%c", arr[j][i]);
		}
	}
}