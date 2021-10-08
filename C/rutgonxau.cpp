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
		for(int i=0; i<n ;i++){

			if(a[i]!=a[i+1]){
				int dem=0;
				for(int j=0; j<lena ;j++){
		
					if(a[j]==a[i]){
						dem++;
					}
				}
			printf(" %c%d",a[i],dem);
			}
		}
	}
return 0;
}

