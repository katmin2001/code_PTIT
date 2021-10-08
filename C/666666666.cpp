#include<stdio.h>

int main()
{
    long long n,s;
    s=0;
	scanf("%lld",&n);
	for(int i=1; i<=n; i++){
		if(i%2==0){
			s=s+i;}
		}
		printf("%lld",s);
return 0;
}
