#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
//code here tml
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		int N;
		scanf("%d",&N);
		for(int j=2; j<=N;j++){
			int dem=0;
			for(int x=2;x<=sqrt(j);x++){
				
				if(j%x==0){
					dem++;
				}
			}
			if(dem==0){
				printf("%d ",j);
			}
		}
		printf("\n");
	}			

return 0;
}

