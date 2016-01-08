#include <stdio.h>
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
	int n;
	n=scan_d();
	int a[n],i;
	for(i=0;i<n;i++) a[i]=scan_d();

	for(i=1;i<n;i++) a[i]^=a[i-1];
	
	printf("%d",a[n-1]);
	return 0;
}
