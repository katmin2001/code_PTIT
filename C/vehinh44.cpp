#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; ++i){
		int wtf=i;
		for(int j=1 ;j<=n; ++j){
			if(j<i){
				printf("%d",wtf);
				wtf--;
			}
			else{
				printf("%d",wtf);
				wtf++;
			
			}
		}
		printf("\n");
	}
}
