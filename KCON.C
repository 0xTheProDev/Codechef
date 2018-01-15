/*
 * K-Concatenation | JAN18
 * Problem Link: https://www.codechef.com/JAN18/problems/KCON/
 * Algorithm by: Satyam Vats
 * Comments by: Progyan Bhattacharya
 */

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
	    int n, k, flag;
	    long long int sum, _sum, max;
	    scanf("%d %d", &n, &k);
	    int A[n];
	    for (int i = 0; i < n; i++) {
	        scanf("%d", A + i);
	    }
	    /*
	     * If all values are positive, then total sum is
	     * maximum sub array sum: O(n)
	     */
	    sum = 0, flag = 1;
	    for (int i = 0; i < n; i++) {
	        if (A[i] < 0) {
	            flag = 0;
	            break;
	        }
	        sum += A[i];
	    }
	    if (flag) {
	        printf("%lli\n", sum * k);
	        continue;
	    }
	    /*
	     * If all values are negative, then the maximum number
	     * will be maximum sub array sum: O(n)
	     */
	    sum = A[0], flag = 1;
	    for (int i = 1; i < n; i++) {
	        if (A[i] >= 0) {
	            flag = 0;
	            break;
	        }
	        sum = sum > A[i] ? sum : A[i];
	    }
	    if (flag) {
	        printf("%lli\n", sum);
	        continue;
	    }
	    /*
	     * General Case
	     */
	    sum = _sum = max = 0;
	    for (int i = 0; i < n; i++) {
	        _sum += A[i];
	    }
	    if (k > 1) {
	        /*
	         * If size of the new array is more than one,
	         * use optimized Kadane's Algorithm to find
	         * maximum sub array sum: O(n)
	         */
	        for (int i = 0; i < 2 * n; i++) {
	            max += A[i % n];
	            if (sum < max) {
	                sum = max;
	            }
	            if (max < 0) {
	                max = 0;
	            }
	        }
	        if (_sum > 0) {
	            sum += _sum * (k - 2);
	        }
	        printf("%lli\n", sum);
	    } else {
	        /*
	         * Use Naive Algorithm to find maximum sub array
	         * sum: O(n)
	         */
	        for (int i = 0; i < n; i++) {
	            max += A[i];
	            if (sum < max) {
	                sum = max;
	            }
	            if (max < 0) {
	                max = 0;
	            }
	        }
	        printf("%lli\n", sum);
	    }
	}
	return 0;
}

