#include <stdio.h>

short isPrime(int n) {
    if (n < 2) {
        return 0;
    } else if (n < 4) {
        return 1;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    for (int div = 6; (div - 1) * (div - 1) <= n; div += 6) {
        if (n % (div - 1) == 0 || n % (div + 1) == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
	    int n;
	    scanf("%d", &n);
	    printf("%s\n", isPrime(n) ? "yes" : "no");
	}
	return 0;
}

