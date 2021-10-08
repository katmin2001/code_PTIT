#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int d[n];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);}
	int min,max;
	min=d[0];
	max=d[0];
	for(int j=1; j<n; j++){
		if(min>d[j]){
			min=d[j];
		}
	}
	for(int j=1; j<n; j++){
		if(max<d[j]){
			max=d[j];
		}	
	}printf("%d %d",max,min);
}
		
