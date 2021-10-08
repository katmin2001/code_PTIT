#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int n;
	cin>>n;
	ll a[n];
	ll x=0;
	ll s=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		s+=a[i];
		x+=abs(a[i]);
	}
	ll t=s+x; 
	cout<<t;
return 0;
}

