#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	int n;
	int a[1000];
	int j=0;
	scanf("%d",&n);
	for(int i=2; i<=n; i++){
		while(n%i==0){
			a[j]=i;
			n/=i;
			j++;
		}
	}
	//tinh so lan
		for (int x = 0; x<1000 ; x++){
			if(a[x]!=a[x+1]){
				int dem=0;
				for( int i = 0; i<n ; i++){
					if(a[i]==a[x]){
					dem++;
					}
				}printf("%d %d\n",a[x],dem);
			}
		}
return 0;
}

