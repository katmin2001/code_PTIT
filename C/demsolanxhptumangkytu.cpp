#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	int n;
	scanf("%d",&n);
	scanf("\n");
	for(int i=1; i<=n; i++){
		int dem=0;
		fflush(stdin);
		char a;
		gets(a);
		scanf("\n");
		char b[50];
		gets(b);
		int lenb=strlen(b);
		for(int j=0; j<lenb; j++){
			if(b[j]==a){
				dem++;
			}
		}
		printf("%d",dem);
	}

return 0;
}

