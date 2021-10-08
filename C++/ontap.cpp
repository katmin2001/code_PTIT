#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
#define mp make_pair
using namespace std;
int a[100][100];
int n;
vector <string> s;
bool check[100][100];

void kenzy(){
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	s.clear();
}
void dichuyen(int i, int j, string x){
	if(a[1][1]==0||a[n][n]==0) return;
	if(i==n&&j==n) s.pb(x);
	if(a[i+1][j]==1&&i!=n&&check[i+1][j]==false){
		check[i][j]=true;
		dichuyen(i+1,j,x+"D");
		check[i][j]=false;
	}
	if(a[i-1][j]==1&&i!=1&&check[i-1][j]==false){
		check[i][j]=true;
		dichuyen(i-1,j,x+"U");
		check[i][j]=false;
	}
	if(a[i][j+1]==1&&j!=n&&check[i][j+1]==false){
		check[i][j]=true;
		dichuyen(i,j+1,x+"R");
		check[i][j]=false;
	}
	if(a[i][j-1]==1&&j!=1&&check[i][j-1]==false){
		check[i][j]=true;
		dichuyen(i,j-1,x+"L");
		check[i][j]=false;
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		kenzy();
		string x;
		dichuyen(1,1,x);
		if(s.size()==0) cout<<-1;
		else{
			sort(all(s));
			for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";
		}
		cout<<endl;
	}
return 0;
}

