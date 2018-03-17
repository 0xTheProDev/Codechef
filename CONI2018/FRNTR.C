#include <stdio.h>

int cmp(const void* a, const void* b) {
    int x = *((int*)a);
    int y = *((int*)b);
    return x > y;
}

int main(void) {
    int n, x, y, m, k = 0, t = 0;
    scanf("%d", &n);
    m = n / 2;
	int T[m], S[m];
	for (int i = 0; i < n; i++) {
	    scanf("%d %d", &x, &y);
	    if (i < m) T[i] = x - y;
	    else       S[i - m] = y;
	}
	qsort(T, m, sizeof(int), cmp);
	qsort(S, m, sizeof(int), cmp);
	for (int i = 0; i < m; i++) {
	    for (int j = k; j < m; j++) {
	        if (S[i] < T[j]) {
	            t++;
	            k = j;
	        }
	    }
	}
	printf("%d", t);
	return 0;
}

