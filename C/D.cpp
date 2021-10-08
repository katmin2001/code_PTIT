#include <stdio.h>
#include <math.h>
#define xx 100000
void sapxep(long a[], long n){
	for( long i=1;i<n;i++){
		for(long j=n;j>i;j--)
		if(a[j]<a[j-1]){
			long tg=a[j];
			a[j]=a[j-1];
			a[j-1]=tg;
		}
	}
}
long a[xx];
long n;
int main(){

	long x;
	scanf("%ld%ld", &n, &x);
	
	for(long i=1;i<=n;i++){
		scanf("%ld", &a[i]);
	}
	sapxep(a,n);
	long b=a[(n/2)+1];
	long dem=0;
	while(1){
		if(b==x) break;
		else {
			if(b>x) {
				b--;
				dem++;
			} else if(b<x){
				b++;
				dem++;
			}
		}
	}
	printf("%ld", dem);
//	printf("%lld", b);
	
	return 0;
}
