#include<stdio.h>
#include<math.h>
	int main(){
	int a,b;
	
	scanf("%d%d",&a,&b);
	
	printf("solon= %d\n",(a+b+abs(a-b))/2);
	
	printf("sobe= %d",(a+b-abs(a-b))/2);
	
	return 0;
	}

