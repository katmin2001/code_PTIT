#include<stdio.h>
int main()
{
	
	for(long long i=10000000;i<=99999999;i++){
	long long m = i;
	long long x=0;
	while(m>0){
		x=x*10 + m%10;
		m/=10;
		}
	if(x==i){printf("%lld\n",i);}
}
return 0;
}
