/* Problem: https://www.codechef.com/problems/RECTSQ */

#include <stdio.h>
         
int main(void) {
    
   	int t;
   	int a, b, m, n;
   	scanf ("%d", &t);
   	
   	while (t--) {
   	    scanf ("%d %d", &a, &b);
   	    m = a;
  	    n = b;
		while (n) {
           m = m % n;
           m ^= n ^= m ^= n;
        }
        	    
        n=a*b/m;
        printf ("%d\n", n/m);
   	}
   	return 0;
}  
