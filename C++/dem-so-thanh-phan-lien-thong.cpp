#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
vector <int> ke[1005];
bool ok[1005];
void DFS(int u){
	ok[u]=true;
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
		for(int i=0; i<1001; i++) ke[i].clear();
		memset(ok,false,sizeof(ok));
		int a,b;
		cin>>a>>b;
		for(int i=0; i<b; i++){
			int u,v;
			cin>>u>>v;
			ke[u].pb(v);
			ke[v].pb(u);
		}
		int dem=0;
		for(int i=1; i<=a; i++){
			if(!ok[i]){
				dem++;
				DFS(i);
			}
		}
		cout<<dem<<endl;
	}
return 0;
}

