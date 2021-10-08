#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,a[100][100];
vector <string> v;
bool check=false;
void init(){
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	v.clear();
	check=false;
}
void kenzy(int i, int j, string s){
	if(i==1&&j==1&&a[i][j]==0){
		check=false;
		return;
	}
	if(i==n&&j==n&&a[n][n]==1){
		v.pb(s);
		check=true;
		return;
	}
	if(i<n&&a[i+1][j]==1) kenzy(i+1,j,s+"D");
	if(j<n&&a[i][j+1]==1) kenzy(i,j+1,s+"R");
	if((i<n&&j<n&&a[i+1][j]==0&&a[i][j+1]==0)||i>n||j>n) return;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		init();
		string s;
		kenzy(1,1,s);
		if(check==false) cout<<"-1";
		else{
			sort(v.begin(),v.end());
			for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
		}
		
		cout<<endl;
	}
return 0;
}

