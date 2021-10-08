#include<stdio.h>

int main(){
//code here tml
	char a[50];
	gets(a);
	for(int i=0;i<50;i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i]-=32;
			}
		else if(a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
			}
		}
	puts(a);

return 0;
}

