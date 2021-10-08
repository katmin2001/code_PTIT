#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int m,n,dem;
int a[1005][1005];
void init(){
	cin>>m>>n;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
}
vector <int> s;
void kenzy(int i, int j){
	if(i==m&&j==n){
		s.pb(dem);
		dem=0;
	}
	if(i<m){
		kenzy(i+a[i][j],j);
		dem++;
	} 
	if(j<n){
		kenzy(i,j+a[i][j]);
		dem++;
	} 
	if(i>m||j>n) return;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		init();
		dem=0;
		kenzy(1,1);
		sort(s.begin(),s.end());
		for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";
		cout<<s[s.size()-1]<<endl;
	}
return 0;
}

