#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
vector <int> ke[1005];
int ok[1005];
bool check=false;
void DFS(int u){
	ok[u]=1;
	for(int i=0; i<ke[u].size(); i++){
		if(ok[ke[u][i]]==0){
			DFS(ke[u][i]);
		}
		else if(ok[ke[u][i]]==1) check=true; 
	}
	ok[u]=2;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<1005; i++){
			ke[i].clear();
		}
		memset(ok,0,sizeof(ok));
		int a,b;
		cin>>a>>b;
		for(int i=0; i<b; i++){
			int u,v;
			cin>>u>>v;
			ke[u].pb(v);
			ke[v].pb(u);
		}
		int oke=1;
		for(int i=1; i<=a; i++){
			check=false;
			memset(ok,0,sizeof(ok));
			DFS(i);
			if(check==true){
				oke=0;
				cout<<"YES";
				break;
			}
		}
		if(oke==1) cout<<"NO";
		cout<<endl;
	}
return 0;
}

