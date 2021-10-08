#include <stdio.h>
#include <iostream>
using namespace std;
 
long ucln(long a, long b)
{
    long r;
    while (a%b != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}
 
int main()
{
    for(int i=1; i<=1000; i++){
		long a, b;
    	cin >> a >> b;
    	if(a==0&&b==0){
    		return 0;
    		}
    	else
    	cout <<ucln(a,b)<<" "<<a*b/ucln(a,b)<<endl;
    	
    }
    return 0;
}
