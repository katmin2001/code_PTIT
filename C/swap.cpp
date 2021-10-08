#include<stdio.h>
#include<string.h>
void swap(int*m, int*n){
	int k;
	k=*m;
	*m=*n;
	*n=k;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	swap(&m,&n);
	printf("%d %d",m,n);
	
return 0;
}

