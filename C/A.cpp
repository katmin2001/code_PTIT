#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	long long l,r;
	long long count=0;
	scanf("%lld%lld",&l,&r);
	for(long long i=l; i<=r; i++){
		long long dem=0;
		for(long long j=1; j<=i; j++){
			if(i%j==0){
				dem++;
			}
		}
		if(dem%2==1){
			count++;
		}
	}
	
	printf("%lld",count);
return 0;
}

