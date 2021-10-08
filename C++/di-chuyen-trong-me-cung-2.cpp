#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,a[100][100];
bool check[100][100];
vector <string> v;
void init(){
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	v.clear();
}
void kenzy(int i, int j, string s){
	if(a[1][1]==0||a[n][n]==0) return;
	if(i==n&&j==n){
		v.pb(s);
	}
	if(a[i+1][j]==1&&i!=n&&check[i+1][j]==false){
		check[i][j]=true;
		kenzy(i+1,j,s+"D");
		check[i][j]=false;
	}
	if(a[i][j+1]==1&&j!=n&&check[i][j+1]==false){
		check[i][j]=true;
		kenzy(i,j+1,s+"R");
		check[i][j]=false;
	} 
	if(a[i-1][j]==1&&i!=1&&check[i-1][j]==false){
		check[i][j]=true;
		kenzy(i-1,j,s+"U");
		check[i][j]=false;
	} 
	if(a[i][j-1]==1&&j!=1&&check[i][j-1]==false){
		check[i][j]=true;
		kenzy(i,j-1,s+"L");
		check[i][j]=false;
	}  
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		init();
		string s;
		kenzy(1,1,s);
		if(v.size()==0) cout<<"-1";
		else{
			sort(v.begin(),v.end());
			for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
		}
		cout<<endl;
	}
return 0;
}

