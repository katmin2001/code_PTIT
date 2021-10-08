#include<stdio.h>
#include<string.h>
int main(){
//code here tml
	int n,x=0;
	scanf("%d",&n);
	char a[3];
	for(int i=1; i<=n; i++){
	    scanf("\n");
		gets(a);
		if(a[1]=='+'){
			x++;
		}
		else x--;
	}
	printf("%d",x);
return 0;
}
 
