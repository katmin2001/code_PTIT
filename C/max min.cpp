#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>max) {max=b;}
	if(c>max) {max=c;}
	printf("%d",max);
	min=a;
	if(b<min) {min=b;}
	if(c<min) {min=c;}
	printf("\t%d",min);
	
return 0;
}
	
	
	
	
	
