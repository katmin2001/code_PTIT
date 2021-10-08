#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n ; i++){
		long long N,s;
		s=0;
		scanf("%lld",&N);
		for(long long j=1; j<=N/2; j++){
			if(N%j==0){
				s+=j;}
		}
		if(s==N){printf("1\n");}
		else printf("0\n");	
	}
return 0;
}	
