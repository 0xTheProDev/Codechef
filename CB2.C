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

int main(void) {
	int t,n,temp;
	t=scan_d();
	while(t--)
	{
	n=scan_d();
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
	    a[i]=scan_d();
	    for(j=0;j<i;j++)
	    {
	        if(a[i]>a[j]) {temp=a[i]; a[i]=a[j]; a[j]=temp;}
	    }
	}
	for(i=0;i<n/2;i++)
	    printf("%d %d ",a[i],a[n-i-1]);
	if(n%2!=0) printf("%d",a[n/2]);
	printf("\n");
	}
	return 0;
}
