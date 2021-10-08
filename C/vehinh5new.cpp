#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    scanf("%d", &n);
    //nua tren cua hinh vuong
    for(int i=1; i<=n; ++i){
		int x=n;
    	for(int j=1; j<=2*n-1; j++){
			if(j<i){
				printf("%d",x);
				x--;
			}
			else if(i<=n&& j>2*n-i-1){
				printf("%d",x);
				x++;
			}
		
			else printf("%d",x);
		}
		printf("\n");
	}
	
	// nua duoi cua hinh vuong
	for(int i=n+1; i<=2*n-1 ; ++i){	
		int x=n;
    	for(int j=1; j<=2*n-1; j++){
			if(j<2*n-i){
				printf("%d",x);
				x--;
			}
			else if(j>=i){
				printf("%d",x);
				x++;
			}
			else printf("%d",x);
		}
		printf("\n");
	}
	return 0;
}
