#include<stdio.h>
long long Fibo(long long n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return (Fibo(n-1)+Fibo(n-2));
	}
}
int main(){
	int x;
	scanf("%d",&x);
	for(int i=1; i<=x;i++){
		long long n;
		scanf("%d",&n);
		int t = Fibo(n);
		printf("%lld\n",t);
	}
return 0;
}
