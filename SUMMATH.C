#include <stdio.h>
#define get getchar_unlocked

inline long long scan_d()
{
        long long n=0;
        char ch=getchar_unlocked();
        while(ch<'0'||ch>'9')
                ch=getchar_unlocked();
        while(ch>='0'&&ch<='9')
        {
                n=(n<<1)+(n<<3)+ch-'0';
                ch=getchar_unlocked();
        }
        return n;
}

int main(void) {
	long long t,n,d,sum;
	t=scan_d();
	while(t--)
	{
	    sum=0;
	    n=scan_d();
	    d=n%10;
	    if(d) n=n-d;
	    sum=(10+n)*n/20;
	    printf("%Ld\n",sum);
	}
	return 0;
}
