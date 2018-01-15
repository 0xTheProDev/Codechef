#include <stdio.h>
#define SIZE 10001

long long unsigned int minStep[SIZE] = { 0, 0, 1, 1 };

long long unsigned int min(long long unsigned int a, long long unsigned int b)
{
    return a < b ? a : b;
}

long long unsigned int min_steps(int n) {
    if (n == 1) {
        return 0;
    }
    if (n < SIZE && minStep[n] != 0) {
        return minStep[n];
    }
    if (n % 3 == 0) {
        minStep[n] = 1 + min_steps(n / 3);
    } else if (n % 3 == 1) {
        minStep[n] = 1 + min_steps(n - 1);
    } else {
        minStep[n] = 1 + min_steps(n + 1);
    }
    return minStep[n];
}

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
	    int n;
	    scanf("%d", &n);
	    printf("%llu\n", min_steps(n));
	}
	return 0;
}

