#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	
	{
		int a,b,c,d,max;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		
		max=a;
		if(b>max) {max=b;}
		if(c>max) {max=c;}
		if(d>max) {max=d;}
		
		printf("%d\n",max);
	}
return 0;
}
	
