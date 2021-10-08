#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int p; cin>>p;
	for(int i=0; i<n; i++){
		if(a[i]!=p) cout<<a[i]<<" ";
	}
return 0;
}

