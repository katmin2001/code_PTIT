#include<stdio.h>

int main(){
//code here tml
	char a[50];
	gets(a);
	int chu=0,so=0;
	for(int i=0;i<50;i++){
		if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')){
			chu++;
			}
		if(a[i]>='0' && a[i]<='9'){
			so++;
			}
		}
		printf("%d %d",chu,so);
return 0;
}

