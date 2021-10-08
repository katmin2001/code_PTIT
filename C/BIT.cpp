#include<stdio.h>
#include<string.h>
#include<iostream>
int main(){
//code here tml
	int n,x=0;
	scanf("%d",&n);
	char a[3];
	for(int i=1; i<=n; i++){
		std::cin.ignore();
		gets(a);
		if(a[1]=='+'){
			x++;
		}
		else x--;
	}
	printf("%d",x);
return 0;
}

