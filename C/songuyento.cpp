#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("\nn=");
	scanf("%d",&n);
	if(n<2)
	{ printf("\nno");
	
	return 0;
	}
	
	
	int dem=0;
	for(int i=2;i<n;i++)
		{
			if(n%i==0){
				dem++;
			}
	
		}
	
	if(dem==0){
		
		printf("\nyes");}
		else{
			

		printf("\nno");
		}
		
		
}
