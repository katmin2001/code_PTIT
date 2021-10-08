#include<stdio.h>
#include<string.h>
int main(){
//code here tml
	int n;
	char c;
	scanf("%d",&n);
	scanf("%c",&c);
	while(n--){
		char c;
		char a;
		scanf("%c",&a);
	
		scanf("%c",&c);
		char b[50];
		gets(b);
	    int leng=strlen(b);
		int dem=0;
		for(int j=0;j<leng;j++){
			if(b[j]==a){
				dem++;
			}
		}	
		printf("%d\n",dem);
	}
		
return 0;
}

