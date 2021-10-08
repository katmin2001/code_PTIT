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
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=k; i<n; i++) cout<<a[i]<<" ";
		for(int i=0; i<k; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
return 0;
}

