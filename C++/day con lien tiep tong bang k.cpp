#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n];
		int check=0;
		for(int i=0; i<n; i++) cin>>a[i];
		ll s=a[0],j=0;
		for(int i=1; i<=n; i++){
			while(s>k&&j<i-1){
				s-=a[j];
				j++;
			}
			if(s==k){
				cout<<"YES"<<endl;
				check=1;
				break;
			}
			if(i<n) s+=a[i];
		}
		if(check==0) cout<<"NO"<<endl;
	}
return 0;
}

