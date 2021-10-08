#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n ; i++){
		scanf("%d",&a[i]);
	}
	int x,k,j;
	scanf("%d%d",&x,&k);

	for(j=n; j>=k ; j--){
		a[j]=a[j-1];
		}
		n++;
		a[k-1]=x;
	for(int j=0; j<n ; j++){
		printf("%d ",a[j]);
	}
return 0;
}
		
