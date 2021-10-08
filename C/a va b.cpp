#include<stdio.h>
int main()
{
	//mangA
	int m,x,dem;
	dem=0;
	scanf("%d",&m);
	int A[m];
	for(int i=0; i<m; i++){
		scanf("%d",&A[i]);}
	//mangB
	int n;
	scanf("%d",&n);
	int B[n];
	for(int i=0; i<n; i++){
		scanf("%d",&B[i]);
		}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(A[i]==B[j]){
				x=i;
			 dem++;
				}
			}
		if(i==x){
			continue;
			}
		printf("%d ",A[i]);
		}
		if(dem==m){
			printf("-1");
			}
		
return 0;	
}	
