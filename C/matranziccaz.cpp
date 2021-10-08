#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m+5][n+5];
	int gt=1,d=0;
	int x=0;
	while(d<m){
		for(x=0;x<n;x++){
			a[x][d]=gt++;
		}
		d++;
		for(x=n-1;x>=0;x--){
			a[x][d]=gt++;
		}
		d++;
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
return 0;
}

