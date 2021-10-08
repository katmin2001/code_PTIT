#include<stdio.h>
#include<math.h>
int main()

{
	int a,b,c,max,min;
	scanf("%d%d%d",&a,&b,&c);
	max=((a+b)+abs(a-b))/2;
	max=((max+c)+abs(max-c))/2;
	
	printf("%d",max);
	
	min=((a+b)-abs(a-b))/2;
	min=((min+c)-abs(min-c))/2;
	
	printf("\t%d",min);
	
return 0;
}
	
