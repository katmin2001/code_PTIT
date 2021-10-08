#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	long long n,s;
	s=0;
	scanf("%lld",&n);
	
		if(n%2==0){
			s=n/2;
		}
		else s=-n+(n-1)/2;
	
	printf("%lld",s);
return 0;
}

