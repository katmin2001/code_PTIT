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
		ll n;
		cin>>n;
		ll a[n];
		
		int x=0;
		int d=1;
		int max=1;
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		for(int i=1; i<n; i++){
			if(a[i]==a[i-1]){
				d++;
			}
			else{
				if(d%2==1){
					cout<<a[i-1]<<endl;
				}
				else d=1;
			}
		}
		if(d%2==1) cout<<a[n-1]<<endl;
	}
return 0;
}

