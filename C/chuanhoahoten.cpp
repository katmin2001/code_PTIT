#include<stdio.h>
#include<string.h>
void chuanhoa(char a[10000]){
	while(a[0]==' ') strcpy(&a[0],&a[1]);
	for(int i=0; i<strlen(a); i++){
		if(a[i]==' ' && a[i+1]==' '){
			strcpy(&a[i],&a[i+1]);
						i--;
		}
	}
	while(a[strlen(a)-1]==' ') strcpy(&a[strlen(a)-1],&a[strlen(a)]);
}
int main(){
//code here tml
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		scanf("\n");
		char a[10000];
		gets(a);
		strlwr(a);
		int lena=strlen(a);
		if(a[0]>='a' && a[0]<='z'){
			a[0]-=32;
		}
		for(int j=0; j<lena; j++){
			if(a[j]==' ' && a[j+1]>='a' && a[j+1]<='z'){
				a[j+1]-=32;
			}
		}
		chuanhoa(a);
		puts(a);
	}
return 0;
}

