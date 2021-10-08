#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,delta;
	scanf("%d%d%d",&a,&b,&c);
	delta=b*b-4*a*c;
	
	if(delta>0)
	{
		delta=sqrt(delta);
		printf("%d\n",(-b+delta)/(2*a));
		printf("%d\n",(-b-delta)/(2*a));}
	else if(delta==0)
	{
		printf("%d",-b/(2*a));}
	else
	{
		printf("null");}

return 0;
}		
		
	
