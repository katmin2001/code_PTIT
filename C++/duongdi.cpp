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
vector <int> ke[1005];
bool ok[1005];
int truoc[1005];
void DFS(int u, int v){
	if(ok[u]) return;
	ok[u]=true;
	for(int i=0; i<ke[u].size(); i++){
		if(!ok[ke[u][i]])
		truoc[ke[u][i]]=u;
		DFS(ke[u][i],v);
	}
}
void Trace(int u,int v){
	if(!ok[v]){
		cout<<-1;
		return;
	}
	vector <int> s;
	while(u!=v){
		if(u==0){
			cout<<-1;
			return;
		}
		s.pb(u);
		u=truoc[u];
	}
	s.pb(v);
	reverse(all(s));
	for(int i=0; i<s.size(); i++){
		cout<<s[i]<<" ";
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<1005; i++) ke[i].clear();
		memset(ok, false, sizeof(ok));
		memset(truoc,0,sizeof(truoc));
		int a,b,nguon,dich;
		cin>>a>>b>>nguon>>dich;
		while(b--){
			int u,v;
			cin>>u>>v;
			ke[u].pb(v);
		}
		DFS(nguon,dich);
		Trace(dich,nguon);
		cout<<endl;
	}
return 0;
}

