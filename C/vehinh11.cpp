#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		for(int a=1 ; a<=n ; a++){
			if(a<i){
			printf(" ");}
		}
		for(int j=1 ; j<=n ; j++){
			printf("*");}
			printf("\n");
		}
	return 0;
}
			
