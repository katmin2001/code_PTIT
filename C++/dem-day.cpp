#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
ll m=123456789;
using namespace std;
ll luythua(int a, ll n){
	if(n==0) return 1;
	if(n==1) return a;
	ll tmp=luythua(a,n/2);
	if(n%2==0) return tmp*tmp%m;
	else return (a*tmp*tmp%m)%m;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<luythua(2,n-1)<<endl;
	}
return 0;
}

