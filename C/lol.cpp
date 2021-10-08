#include<stdio.h>

int main()
{
	int n,m,y,dem;

	scanf("%d%d%d",&n,&m,&y);	dem=0;
	for(int i=1 ; i < n ; i++ ){
		if((i%m==0) && (i%y!=0)){
		printf("%d ",i);
		dem++;
		}
		
	}
	if(dem==0){printf("-1");}
	
	return 0;
}
	
