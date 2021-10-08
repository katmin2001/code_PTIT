#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll m=1e9+7;
ll dao(ll n){
	ll x=0;
	while(n){
		x=x*10+n%10;
		n/=10;
	}
	return x;
}
ll luythua(ll n,ll r){
	if(r==0) return 1;
	ll tmp=luythua(n,r/2);
	if(r%2==0) return tmp*tmp%m;
	else return n*(tmp*tmp%m)%m;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll r=dao(n);
//		cout<<r<<endl;
		cout<<luythua(n,r);
		cout<<endl;
	}
return 0;
}

