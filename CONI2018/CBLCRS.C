#include <stdio.h>

int find(int S[], int i) {
    if (S[i] != i) {
        return find(S, S[i]);
    }
    return i;
}

void Union(int S[], int i, int j) {
    int x = find(S, i);
    int y = find(S, j);
    S[x] = y;
}

int main(void) {
	int n, m, q, u, v, x, y;
	scanf("%d %d", &n, &m);
	n++;
	int S[n];
	for (int i = 0; i < n; i++) {
	    S[i] = i;
	}
	for (int i = 0; i < m; i++) {
	    scanf("%d %d", &u, &v);
	    Union(S, u, v);
	}
	scanf("%d", &q);
	while (q--) {
	    scanf("%d %d", &u, &v);
	    x = find(S, u);
	    y = find(S, v);
	    printf("%s\n", x == y ? "YES" : "NO");
	}
	return 0;
}

