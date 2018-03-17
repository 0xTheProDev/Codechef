#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	char word[100][1001];
	unsigned long long int i = 0;
	while (scanf("%s", word[i]) != EOF) {
	    i++;
	}
	for (int j = 0; j < i - 1; j++) {
	    printf("%c.", toupper(word[j][0]));
	}
	printf("%s", word[i - 1]);
	return 0;
}

