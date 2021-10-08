#include<stdio.h>
int main()
{

		int luong;
	
		scanf("%d",&luong);
		if(luong>=20)
		{
			
			if(luong%20==0)
			{printf("%.0f\n",luong*0.05);}
			else if(luong%2==0) {printf("%.1f\n",luong*0.05);}
			else {printf("%.2f\n",luong*0.05);}
			}
		else if(luong>=10)
		{
			
			if(luong==10) 
			{printf("%.1f\n",luong*0.03);}
			else {printf("%.2f\n",luong*0.03);}
			}
		else 
		{
			if(luong==0) {printf("%d",0);}
			else {
			printf("%.2f\n",luong*0.01);}
			
			}
	
	
return 0;
}		
		
