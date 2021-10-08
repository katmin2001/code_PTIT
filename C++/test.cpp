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
		ll a[n];
		cin>>n>>k;
		for(int i=0; i<n; i++) cin>>a[i];
		ll max;
		for(int i=0; i<n-k+1; i++){
			max=-1;
			for(int j=i; j<k+i; j++){
				if(a[j]>max) max=a[j];
			}
			cout<<max<<" ";
		}
		cout<<endl;
	}
return 0;
}

