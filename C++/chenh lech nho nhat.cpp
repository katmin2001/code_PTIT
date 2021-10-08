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
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		ll min=1000000000;
		int d;
		for(int i=n-1; i>0; i--){
			d=a[i]-a[i-1];
			if(d<min) min=d;
		}
		cout<<min<<endl;
	}
return 0;
}

