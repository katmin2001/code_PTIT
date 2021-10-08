#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int n;
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
	int s;
	s=d[n-1]+d[n-2]+d[n-3];
	printf("%d\n",s);
	}
}
