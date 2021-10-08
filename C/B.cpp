#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	char a[300000];

	gets(a);
	
	int lena=strlen(a);
	int dem=0,s=0,count1=-1;
	for(int i=0; i<lena; i++){
		if(a[i]%4==0){
			dem++;
		}
	}
	
	for(int j=0; j<lena; j++){
		
		s=s*10+a[j];
		if(s%4==0){
			count1++;
		}
	}
	printf("%d",dem+count1);
return 0;
}

