#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
ll m=1e9+7;
using namespace std;
ll luythua(ll n, ll k){
	if(k==0) return 1;
	ll tmp=luythua(n,k/2);
	if(k%2==0) return tmp*tmp%m;
	else return n*(tmp*tmp%m)%m;
}
void kenzy(){
	ll n; int k;
	cin>>n>>k;
	ll s=0;
	for(int i=1; i<=n; i++){
		s=(s+luythua(i,k))%m;
	}
	cout<<s;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

