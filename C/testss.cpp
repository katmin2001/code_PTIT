#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	char a[300];
	gets(a);
	int lena=strlen(a);
	for(int i=0; i<lena; i++){
		if(a[i]=='r' && a[i+1]=='a' && a[i+2]=='k' && a[i+3]=='a' && a[i+4]=='n'){
			for(int j=0; j<lena; j++){
				if(a[j]=='x' && a[j+1]=='a' && a[j+2]=='y' && a[j+3]=='a' && a[j+4]=='h'){
					printf("love");
					return 0;
				}
			}
			for(int j=0; j<lena; j++){
				if(a[j]!='x' && a[j+1]!='a' && a[j+2]!='y' && a[j+3]!='a' && a[j+4]!='h'){
					printf("yellow");
					return 0;
				}	
			}
		}
	}
	for(int i=0; i<lena; i++){
		if(a[i]=='x' && a[i+1]=='a' && a[i+2]=='y' && a[i+3]=='a' && a[i+4]=='h'){
			for(int j=0; j<lena; j++){
				if(a[j]=='r' && a[j+1]=='a' && a[j+2]=='k' && a[j+3]=='a' && a[j+4]=='n'){
					printf("love");
					return 0;
				}
			}
			for(int j=0; j<lena; j++){
				if(a[j]!='r' && a[j+1]!='a' && a[j+2]!='k' && a[j+3]!='a' && a[j+4]!='n'){
					printf("purple");
					return 0;
				}	
			}
		}
	}
	for(int i=0; i<lena; i++){
		if(a[i]!='x' && a[i+1]!='a' && a[i+2]!='y' && a[i+3]!='a' && a[i+4]!='h'){
			for(int j=0; j<lena; j++){
				if(a[j]!='r' && a[j+1]!='a' && a[j+2]!='k' && a[j+3]!='a' && a[j+4]!='n'){
					printf("kaisa");
					return 0;
					}
				}
			}
		}
return 0;
}

