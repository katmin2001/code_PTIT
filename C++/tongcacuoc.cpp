#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll tcs(ll n){
	ll s=0;
	while(n){
		s+=n%10;
		n/=10;
	}
	return s;
}
void tml(){
	ll n;
	cin>>n;
	ll s=0;
	ll x=n;
	for(int i=2; i<=sqrt(n); i++){
		while(n%i==0){
			s+=tcs(i);
			n/=i;
		}
	}
	if(n>1) s+=tcs(n);
	if(s==tcs(x)) cout<<"YES";
	else cout<<"NO";
}
int main(){
////code here tml
//	int t;
//	cin>>t;
//	while(t--){
		tml();
		cout<<endl;
//	}
return 0;
}

