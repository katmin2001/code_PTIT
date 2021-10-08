#include<stdio.h>
#include<string.h>
 
int main(){
//code here tml
	int n;
	scanf("%d\n",&n);
	for(int i=1; i<=n; i++){
		int dem=0;
		char a;
        scanf("%c\n",&a);
		char b[1000];
		gets(b);
		int lenb=strlen(b);
		for(int j=0; j<lenb; j++){
			if(b[j]==a){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
 
return 0;
}
