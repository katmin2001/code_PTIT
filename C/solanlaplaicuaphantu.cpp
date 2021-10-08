#include<stdio.h>
int main(){
	int n,dem;
	scanf("%d",&n);
	int d[n];
	for (int i = 0; i<n ; i++){
		scanf("%d",&d[i]);
	}
	for (int j = 0; j<n ; j++){
		int dem=0,a;
		for( a = 0; a<n ; a++){
			if(d[a]==d[j]){
				dem++;}
			
			
		}if(d[a]!=d[j]){
			
			printf("%d %d\n",d[j],dem);}
	}
return 0;
}

