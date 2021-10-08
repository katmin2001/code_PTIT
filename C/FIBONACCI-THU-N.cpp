#include <stdio.h>
long long Fibonacci(int n)
{
    long long a1=1,a2=1;
    if (n==1 || n==2)
        return 1;
    long long i=3,a;
    while(i<=n)
    {
        a=a1+a2;
        a1=a2;
        a2=a;
        i++;
    }
    return a;
}
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1; i<=x; i++){
		int n;
    	scanf("%d",&n);
    	printf("%lld\n",Fibonacci(n));
    }
	return 0;
}
