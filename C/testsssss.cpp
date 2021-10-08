#include<stdio.h>
int main(){
	int n,dem;
	scanf("%d",&n);
	int d[n];
	for(int i=0; i<n ; i++){
		scanf("%d",&d[i]);
	}
	for( int j=0; j<n; j++){
		int min=d[j];
		int pos=j,a;
		for(a=j; a<n; a++){
			if(min>d[a]){
				min=d[a];
				pos=a;
			}
		}
		a=d[j];
		d[j]=d[pos];
		d[pos]=a;
		}
	for(int j=0; j<n; j++){
		int s=0,dem=1;
		if(d[j]>=999){
			printf("1");
			}
		else	
			s=s+d[j];
			if(s>999){
				dem++;
				}
			}
		
	printf("%d",dem);
}
