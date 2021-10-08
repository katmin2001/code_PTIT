#include<stdio.h>
int main()
{
	int n,k;
	//sapxepmang
	scanf("%d%d",&n,&k);
	
	int d[n];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);}
	for( int j=1; j<n; j++){
		int min=d[j];
		int pos=j,a;
		for(a=j; a<n; a++){
			if(min<d[a]){
				min=d[a];
				pos=a;
			}
		}
		a=d[j];
		d[j]=d[pos];
		d[pos]=a;
	}
	//tong min
	int s=d[0],t=0,tong;
	for(int i=1; i<=k ; i++){
		s=s+d[i];}
	for(int i=n-1; i>k ; i--){
		t=t-d[i];}
	tong=s+t;
	printf("%d",tong);
}
