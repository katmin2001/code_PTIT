#include<stdio.h>
#include<string.h>

int main(){
//code here tml

	char a[1000];
	gets(a);
	char b[1000];
	gets(b);
	int lena=strlen(a);
	int lenb=strlen(b);
	int lenc=(lena+lenb)/2;
	for(int i=0; i<lenc; i++){
		if(a[i]!=b[lenc-1-i]){
			printf("NO");
			return 0;
		}
	}
		printf("YES");
return 0;
}

