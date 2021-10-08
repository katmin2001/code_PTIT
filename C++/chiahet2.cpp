#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int n,m;
	cin>>n>>m;
	ll a[n];
	ll ta=1;
	for(int i=0; i<n; i++){
		cin>>a[i];
		ta*=a[i];
	} 
	ll b[m][n];
	ll tb;
	bool check[m];
	for(int i=0; i<m; i++) check[i]=false;
	for(int i=0; i<m; i++){
		tb=1;
		for(int j=0; j<n; j++){
			cin>>b[i][j];
			tb*=b[i][j];
		}
		if(ta%tb==0) check[i]=true;
	}
	int dem=0;
	for(int i=0; i<m; i++) if(check[i]==true) dem++;
	cout<<dem<<endl;
	for(int i=0; i<m; i++){
		if(check[i]==true) cout<<i+1<<" ";
	}
return 0;
}

