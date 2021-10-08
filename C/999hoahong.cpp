#include<stdio.h>
int main(){
	int n,dem,s;
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
	s=0;dem=1;
	if(d[n-1]>=999){
		printf("1");
		}
	else {
		for(int j=n-1; j>=0; j--){
			s=s+d[j];
			if(s<999){
				dem++;
				}
		}	printf("%d",dem);
	}
}

