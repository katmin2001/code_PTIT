#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
//code here tml
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1001];
		int k;
		char ch;
		scanf("\n");
		gets(s);
		scanf("\n");
		scanf("%c",&ch);
		scanf("\n");
		scanf("%d",&k);
		int i = 0;
		for(i = 0; i < strlen(s);){
			
			if(i==k){
				printf("%c",ch);
			//	continue;
			}
			printf("%c",s[i]);
			i++;
		}
		if(i==k){
			printf("%c",ch);
		}
		printf("\n");
	}

return 0;
}

