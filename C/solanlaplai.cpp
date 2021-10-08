#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int d[n];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);}
	//sap xep
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
	//tinh so lan
		for (int j = 0; j<n ; j++){
			if(d[j]!=d[j+1]){
			int dem=0;
			for( int a = 0; a<n ; a++){
				if(d[a]==d[j]){
				dem++;
				
			}
		}printf("%d %d\n",d[j],dem);
	}
}
return 0;
}
