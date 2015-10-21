/* Problem: www.codechef.com/problems/FCTRL */

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

int main(void)
{
    int t,n,count,c;
    t=scan_d();
        while(t--)
    {
        count=0;
        n=scan_d();
        c=5;
        while((n/c)>0)
        {
            count+=(n/c);
            c=c*5;
        }
        printf("%d\n",count);
    }
	return 0;
}
