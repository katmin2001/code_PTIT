#include<stdio.h>
#include<math.h>
int main()
{
	int n,dem;
	scanf("%d",&n);
	for(int a=1; a <= n ; a++){
		for(int b=1; b <= n ; b++){
			float c=sqrt(a*a+b*b);
			if((int)c==c && c <= n && a<b && b<c){
				printf("%d\t%d\t%d\t\n",a,b,c);
				dem++;
				}
				
			
				}
				
		}
		if(dem==0){printf("-1");}
	
	return 0;
}	
