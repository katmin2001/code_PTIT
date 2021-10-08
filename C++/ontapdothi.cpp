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
void DFS(int u){
	ok[u]=true;
	cout<<u<<" ";
	for(int i=0; i<ke[u].size(); i++){
		if(!ok[ke[u][i]]){
			DFS(ke[u][i]);
		}
	}
}
void BFS(int u){
	queue <int> q;
	q.push(u);
	while(q.size()>0){
		int top=q.front(); q.pop();
		cout<<top<<" " ;
		ok[top]=true;
		for(int i=0; i<ke[top].size(); i++){
			if()!ok[ke[top][i]]{
				ok[ke[top][i]]=true;
				q.push(ke[top][i]);
			}
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
		int v,e,nguon;
		cin>>v>>e>>nguon;
		while(e--){
			int a,b;
			cin>>a>>b;
			ke[a].pb(b);
//			ke[b].pb(a);
		}
		DFS(nguon);
		cout<<endl;
	}
return 0;
}

