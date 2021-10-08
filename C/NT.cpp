#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int flag = 0;
	if(n < 2){
		printf("No");
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			flag = -1;
			break;
		}
	}
	if(flag == -1) printf("No");
	else printf("Yes");
	return 0;
}
