#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n ;i++){
		for(int j=0; j<n-1 ;j++){
			if(a[j]>a[j+1]){
				int pos=a[j];
				a[j]=a[j+1];
				a[j+1]=pos;
			}	
		}
	}
	for(int i=0; i<n ;i++){

		if(a[i]!=a[i+1]){
			int dem=0;
			for(int j=0; j<n ;j++){
		
			if(a[j]==a[i]){
				dem++;
				}
			}
		printf("%d %d\n",a[i],dem);
	}
	}
return 0;	
}
