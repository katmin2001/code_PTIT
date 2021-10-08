#include<stdio.h>
#include<string.h>

int UCLN(int a, int b){
    
    if(a>b) 
        UCLN(a%b,b);
    else
        UCLN(a,b%a);
}
int BCNN(int a, int b){
    return (a*b/UCLN(a,b) );
}
int BCNNMang(int a[],int x){
        int tmp = BCNN(a[0], a[1] );
        for(int i=2;i<x;i++){
            tmp = BCNN(tmp, a[i]);    
        }
        return tmp;
    }
int main(){
    int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		int x;
		scanf("%d",&x);
		int a[x];
		for(int j=0; j<x; j++){
			scanf("%d",&a[j]);
		}
		printf("%d\n",BCNNMang(a,x));
	}
    return 0;
}

