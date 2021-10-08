#include<stdio.h>

int main()
{
	int n;
	
	scanf("%d",&n);
	for(int i=1; i <= n ; i++ ){
		int a,giaithua;
		giaithua=1;
		scanf("%d",&a);
		while(a>=1){
			giaithua*=a;
			a--;
		}printf("%d\n",giaithua);	
	}
	
return 0;
}
