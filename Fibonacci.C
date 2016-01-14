#include <stdio.h>
#define get getchar_unlocked

inline int scan_d(void){
	int n=0,s=1;
    char p=get();
    if(p=='-')  s=-1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-') p=get();
    if(p=='-') s=-1,p=get();
    while(p>='0'&&p<='9') { n = (n<< 3) + (n<< 1) + (p - '0'); p=get(); }
	return n*s;
}

long long int fib[101]={0,1,1};
long long int fibo(int n)
{
    if(fib[n]==0)
        fib[n] = fibo(n-1) + fibo(n-2);
    return fib[n];
}

int main(void) {
    int t,n;
    t=scan_d();
    while(t--)
    {
        n=scan_d();
        printf("%lld\n",fibo(n));
    }
	return 0;
}
