#include<stdio.h>

int main()
{
	
		int a;
		long long giaithua;
		giaithua=1;
		scanf("%d",&a);
		while(a>=1){
			giaithua*=a;
			a--;
		}		printf("%lld\n",giaithua);
	

return 0;
}
