#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1; i<=t; i++){
	scanf("\n");
	char a[100000];
	gets(a);
	int lena=strlen(a);
	char x;
	scanf("%c\n",&x);
	int k;
	scanf("%d",&k);
	for(int j=lena; j>=k; j--){
		a[j]=a[j-1];
		}
		lena++;
		a[k]=x;
	for(int j=0; j<lena ; j++){
		printf("%c",a[j]);
	}
	printf("\n");
	}
return 0;
}

