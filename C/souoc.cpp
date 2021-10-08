#include<stdio.h>
int main()
{
	int n,dem;

	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		dem=0;
		int N;
		scanf("%d",&N);
		for(int a=1; a<=N; a++){
			if(N%a==0){dem++;}}
			printf("%d\n",dem);
		for(int j=1; j<=N; j++){
			if(N%j==0){printf("%d ",j);
			}
		}printf("\n");
		
	}		
return 0;
}	
