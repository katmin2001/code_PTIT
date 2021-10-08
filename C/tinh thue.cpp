#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int luong;
		float thue;
		scanf("%d",&luong);
		if(luong>=20)
		{
			thue=0.05*luong;
			if(luong%20==0)
			{printf("%.0f\n",thue);}
			else if(luong%2==0) {printf("%.1f\n",thue);}
			else {printf("%.2f\n",thue);}
			}
		else if(luong>=10)
		{
			thue=0.03*luong;
			if(luong%10==0) 
			{printf("%.1f\n",thue);}
			else {printf("%.2f\n",thue);}
			}
		else 
		{
			thue=0.01*luong;
			printf("%.2f\n",thue);
			}
	}
	
return 0;
}		
		
