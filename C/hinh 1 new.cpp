#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i < n-1; i++){
		for(int j=0; j < 2*n-1; j++){
			if(j == (n-i-1) || j == (n+i-1)){
				printf("*");
			}
			else printf(" ");
		}
			printf("\n");
	}
	for(int a=0; a < 2*n-1; a++){
		if(a%2==0){
		
		printf("*");}
		else printf(" ");
		
	}
		
	return 0;	
}
