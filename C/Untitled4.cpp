#include<stdio.h>
int main(){


	int n;
	scanf("%d",&n);
	int d[n];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);}
	int min,a;
	a=0;
	min=d[0];
	int j;
	for(j=1; j<n; j++){
		if(min>d[j]){
			min=d[j];
			a=j+1;
		}
		
	}printf("%d",a);

