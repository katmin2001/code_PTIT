#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	int n;
	int k;
	scanf("%d",&n);
	k=n-1;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<2*n-1; j++){
			if(j==k-i||j==k+i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	for(int i=0; i<2*n-1; i++){
		if(i%2==0) printf("*");
		else printf(" ");
			}
return 0;
}

