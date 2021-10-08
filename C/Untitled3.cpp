#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
//code here tml
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		long long a;
		long long s=0;
		scanf("%lld",&a);
		for(int j=1; j<sqrt(a);j++){
			if(a%j==0){
				s=s+j;
				s=s+(a/j);
			}
		}
		long long x;
		x=sqrt(a);
		if(a==x*x){
			s=s+x;
		}
		printf("%lld\n",s);
	}

return 0;
}

