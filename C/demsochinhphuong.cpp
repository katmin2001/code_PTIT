#include<stdio.h>
int main(){
	int n,dem;
	
	scanf("%d",&n);
	int a[n];
	for(int i=0 ; i < n ; i++){
		scanf("%d",&a[i]);
		}
	dem=0;
	for(int i=0 ; i<n; i++){
		
		for(int j=1 ; j < n ; j++){
			if(j*j==a[i]){
				dem++;
				}
			}
	
		}
			printf("%d",dem);
return 0;	
}

