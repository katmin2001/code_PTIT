#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
vector <int> ke[1005];
bool ok[1005];
void DFS(int u){
	ok[u]=true;
	cout<<u<<" ";
	for(int i=0; i<ke[u].size(); i++){
		if(!ok[ke[u][i]]){
			DFS(ke[u][i]);
		}
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<1005; i++){
			ke[i].clear();
		}
		memset(ok,false,sizeof(ok));
		int a,b,nguon;
		cin>>a>>b>>nguon;
		for(int i=0; i<b; i++){
			int u,v;
			cin>>u>>v;
			ke[u].pb(v);
//			ke[v].pb(u);
		}
		DFS(nguon);
		cout<<endl;
	}
return 0;
}

