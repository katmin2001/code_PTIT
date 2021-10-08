#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		float a,b,c,tb;
		scanf("%f%f%f",&a,&b,&c);
		tb=(a+b+c)/3;
		if(tb<5)
		{
			printf("yeu\n");}
		else if(tb<6.5)
		{
			printf("trung binh\n");}
		else if(tb<8)
		{
			printf("kha\n");}
		else {
			printf("gioi\n");}
	}		
	
	return 0;
	
}
		
