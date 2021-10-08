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
		int a[2][n];
		for(int i=0; i<n; i++) cin>>a[0][i];
		sort(a[0],a[0]+n);
		for(int i=0; i<n; i++) cout<<a[0][i]<<" ";
	}
return 0;
}

