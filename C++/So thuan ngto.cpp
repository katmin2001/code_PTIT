#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll nt(ll n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
ll snt(ll n){
	int s=0;
	ll x;
	while(n){
		x=n%10;
		if(nt(x)){
			s+=x;
			n/=10;
		}
		else return 0;
	}
	if(nt(s)==0) return 0;
	else return 1;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		int dem=0;
		for(int i=a; i<=b; i++){
			if(snt(i)&&nt(i)) dem++;
		}
		cout<<dem<<endl;
	}
return 0;
}

