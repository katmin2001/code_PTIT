#include<stdio.h>
int main(){
	int n,kt;
	scanf("%d",&n);
	int d[n];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);}
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
	for(int i=0; i<n; i++){
		if(d[i]==i+1){
			kt=1;
			}
		else kt=0;
		}
	if(kt==1){
		printf("YES");
		}
	else printf("NO");
	
}
