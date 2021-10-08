#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n;i++){
		
		long long a,s;
		scanf("%lld",&a);
		s=11;
		while(s>=10){
			s=0;
		while(a>0){
			s+=a%10;
			a/=10;}
		a=s;}
		printf("%lld\n",s);
	}
return 0;
}	
