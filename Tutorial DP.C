#include <stdio.h>
#define get getchar_unlocked

int dp[1001]={0};
//dp[1]=0;

inline int scan_d(void){
	int n=0,s=1;
    char p=get();
    if(p=='-')  s=-1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-') p=get();
    if(p=='-') s=-1,p=get();
    while(p>='0'&&p<='9') { n = (n<< 3) + (n<< 1) + (p - '0'); p=get(); }
	return n*s;
}

int min(int a, int b)
{
    return a<=b? a : b;
}

int getMinSteps ( int n )
{
    int i;
    for(i=2;i<=n;i++)
    {
        dp[i] = 1 + dp[i-1];
        if(i%2==0) dp[i] = min( dp[i] , 1+ dp[i/2] );
        if(i%3==0) dp[i] = min( dp[i] , 1+ dp[i/3] );
    }
    return dp[n];
}

int main(void) {
	int n;
	n=scan_d();
	printf("%d",getMinSteps(n));
	return 0;
}
