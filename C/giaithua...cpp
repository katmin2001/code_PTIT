#include<stdio.h>

int main()
{
	for(int i=1; i <= 1000 ; i++ ){
		int a;
		long long giaithua;
		giaithua=1;
		scanf("%d",&a);
		if(a==0){
			return 0;
			}
		else while(a>=1){
			giaithua*=a;
			a--;
		}
		printf("%lld\n",giaithua);
		
	}

return 0;
}
