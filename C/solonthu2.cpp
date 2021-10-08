#include<stdio.h>
int main()
{
	long long a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	//a lon nhat
	if(a>b && a>c){
		if(b>c){printf("%lld",b);}
		else if(c>b){printf("%lld",c);}
		else printf("%lld",b);
	}
	if(a==b && b>c){printf("%lld",c);}
	
	//b lon nhat
	if(b>a && b>c){
		if(a>c){printf("%lld",a);}
		else if(c>a){printf("%lld",c);}
		else printf("%lld",c);
	}
	
	if(b==c && c>a){printf("%lld",a);}
	//c lon nhat
	if(c>b && c>a){
		if(b>a){printf("%lld",b);}
		else if(a>b){printf("%lld",a);}
		else printf("%lld",a);
	}

	if(c==a && a>b){printf("%lld",b);}
	if(a==b && a==c){printf("%lld",a);}
return 0;		
}
