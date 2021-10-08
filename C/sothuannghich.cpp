#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
	int n;
	scanf("%d",&n);
	int m = n;
	int x=0;
	while(m){
		x=x*10 + m%10;
		m/=10;
		}
	if(x==n){printf("YES\n");}
	else printf("NO\n");}
return 0;
}
