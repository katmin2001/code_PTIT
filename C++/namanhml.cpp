#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
double s1(double x, int n){
	double s=1,t=1;
	for(int i=1; i<=n; i++){
		t*=x/i;
		s+=t;
	}
	return(s);
}
double s2(double x, int n){
	double s=1,t=1;
	for(int i=1; i<=n; i++){
		t*=x/i;
		if(i%2==1) s-=t;
		else s+=t;
	}
	return(s);
}
int main(){
//code here tml
	double x;
	int n;
	x=1; n=10;
	printf("S1 = %.4f \n",s1(x,n));
	printf("S2 = %.4f \n",s2(x,n));
return 0;
}

