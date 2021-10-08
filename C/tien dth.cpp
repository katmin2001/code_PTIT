#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int phut;
		scanf("%d",&phut);
		if(phut<=50)
		{
			printf("%d\n",600*phut);}
		else if(phut<=150)
		{
			printf("%d\n",50*600+(phut-50)*400);}
		else
		{
			printf("%d\n",50*600+100*400+(phut-150)*200);}
	}
return 0;
}		
