#include<stdio.h>
#include<string.h>
 
int main(){
//code here tml
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		scanf("\n");
		char a[1000];
		gets(a);
		int lena=strlen(a);
		int kt = 1;
		for(int j=0; j<=lena/2; j++){
			if(a[j]!=a[lena-1-j]){
				kt = 0;
				break;
			}
		}
		if(kt == 0)		printf("NO\n");
		else printf("YES\n");
	}
 
return 0;
}
