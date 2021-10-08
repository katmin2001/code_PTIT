#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n ; i++){
		scanf("%d",&a[i]);
	}
	int k,x;
	x=n;
	scanf("%d",&k);
	for(int i=0; i<n ; i++){
		if(a[i]%k==0){
			x=i;
			break;
			}
		}
	
		
	if(x==n){
		printf("-1");
		}
	else{
		for(int i=0; i<n ; i++){
			if(i==x){
				
				continue;
				}
			printf("%d ",a[i]);
		}
	}
}
