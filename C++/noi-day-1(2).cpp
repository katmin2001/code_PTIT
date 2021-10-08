#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll mod=1e9+7;
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll val;
		priority_queue<ll, vector<ll>, greater<ll>> a ;
		for(int i=0; i<n; i++){
			cin>>val;
			a.push(val);
		}
		ll res=0;
		while(a.size()>1){
			ll x=a.top(); a.pop();
			ll y=a.top(); a.pop();
			ll tmp=(x+y)%mod;
			a.push(tmp);
			res+=tmp;
			res%=mod;
		}
		cout<<res<<endl;
	}
return 0;
}

