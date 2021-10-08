#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1 ; i<=t ; i++){
	int n,k,e,a,b;
	double gt1,gt2,gt3;
	scanf("%d%d",&n,&k);
		a=n;
		b=k;
		gt1=1;
		gt2=1;
		gt3=1;
//tinh n gt		
		
		while(n>=1){
			gt1*=n;
			n--;
		}
//tinh k gt	
		while(k>=1){
			gt2*=k;
			k--;
		}	
//tinh (n-k) gt
		
		e=a-b;
		while(e>=1){
			gt3*=e;
			e--;
		}
//tinh so cach chon
	printf("%.0f\n",gt1/(gt2*gt3));}

return 0;
}		
