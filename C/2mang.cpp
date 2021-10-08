#include<stdio.h>
int main()
{int n;
	scanf("%d",&n);
	int d[n],a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);}
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);}
	int x[2*n];
	for(int i=0; i<n; i++){
		x[2*i]=d[i];
		x[2*i+1]=a[i];
		printf("%d %d ",x[2*i],x[2*i+1]);
	}
}
	
