#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		}
	int s=0;
	for(int j=0; j<n; j++){
		s=s+a[j];
	}	
	int soxe;
	if(s%4!=0){
		soxe=(s/4)+1;
	}
	else soxe=s/4;
	printf("%d",soxe);
return 0;
}

