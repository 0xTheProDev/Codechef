#include <stdio.h>
#include <string.h>

unsigned long long int gcd(unsigned long long int a, unsigned long long int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(void) {
	char word[1024];
	unsigned long long int count = 0, total = 0;
	while (scanf("%s", word) != EOF) {
	    if (!(strcasecmp(word, "love") && strcasecmp(word, "babe") && strcasecmp(word, "sweety") && strcasecmp(word, "life"))) {
	        count++;
	    }
	    total++;
	}
	unsigned long long int div = gcd(count, total);
	printf("%lld\/%lld\n", count / div, total / div);
	return 0;
}

