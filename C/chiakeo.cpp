#include<stdio.h>
int main()
{
	long k,a,b,c,m;
	
	scanf("%ld%ld%ld%ld",&k,&a,&b,&c);
	m=k-a-b-c;
	if(m==0){ printf("1");}
	else if(m<0){ printf("0");}
	else {printf("%ld",((m+1)*(m+2))/2);}
	 
return 0;
}
	

