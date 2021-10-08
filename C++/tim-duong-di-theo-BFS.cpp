#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int truoc[1005];
vector <int> ke[1005];
bool ok[1005];
void BFS(int u, int v){
	queue <int> q;
	q.push(u);
	while(q.size()>0){
		int top=q.front(); q.pop();
		ok[top]=true;
		if(top==v) return;
		for(int i=0; i<ke[top].size(); i++){
			if(!ok[ke[top][i]]){
				ok[ke[top][i]]=true;
				truoc[ke[top][i]]=top;
				q.push(ke[top][i]);
			}
		}
	}
}
void Trace(int u, int v){
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
	reverse(s.begin(),s.end());
	for(int i=0; i<s.size(); i++){
		cout<<s[i]<<" ";
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<1001; i++) ke[i].clear();
		memset(ok,false, sizeof(ok));
		memset(truoc,0,sizeof(truoc));
		int a,b,nguon,dich;
		cin>>a>>b>>nguon>>dich;
		for(int i=0; i<b; i++){
			int u,v; cin>>u>>v;
			ke[u].pb(v);
			ke[v].pb(u);
		}
		BFS(nguon,dich);
		Trace(dich,nguon);
		cout<<endl;
	}
return 0;
}

