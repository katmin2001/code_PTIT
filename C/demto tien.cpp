#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		int a[10]={1000,500,200,100,50,20,10,5,2,1};
		int N,dem=0;
		scanf("%d",&N);
		for(int j=0;j<10;j++){
			dem=N/a[j]+dem;
			N=N%a[j];
		}
		printf("%d\n",dem);
	}
}
