#include<stdio.h>

int main(){
//code here tml
	int n;
	scanf("%d",&n);
	int dem=0;
	for(int i=2; i<=n; i++){
		while(n%i==0){
			dem++;
			n/=i;
		}
		if(dem){
			printf("%d %d\n",i,dem);
			dem=0;
		}
	}
return 0;
}
