#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int k;
ll re10(ll a){
	ll s=0;
	ll i=0;
	while(a>0){
		s+=(a%10)*pow(k,i);
		i++;
		a/=10;
	}
	return s;
}
//int rek(int a){
//	vector<int> v;
//	int n;
//	while(a){
//		n=a;
//		a/=k;
//		v.pb(n-a*k);
//	}
//	for(int i=v.size()-1; i>=0; i--){
//		cout<<v[i];
//	}
//}
ll rek(ll a){
	ll s=0;
	ll i=0;
	while(a>0){
		s+=(a%k)*pow(10,i);
		i++;
		a/=k;
	}
	return s;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>k>>a>>b;
		a=re10(a);b=re10(b);
		ll c=a+b;
		cout<<rek(c)<<endl;
	}
return 0;
}

