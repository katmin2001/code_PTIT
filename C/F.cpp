#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	int n;
	scanf("%d",&n);
	int tong=0;
	for(int i=1; i<=n; i++){
		int a;
		int s=0;
		scanf("%d",&a);	
		int j=2;
		while(a!=1){
		
			if(a%j==0){
				s=s+j;
				a=a/j;
			}
			else{
			j++;
			}
		}
		tong=s+tong;
	}
	printf("%d",tong);
return 0;
}


