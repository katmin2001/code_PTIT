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
vector<int>ke[1005];
bool ok[1005];

void BFS(int u,int v){
	queue <int> q;
	q.push(u);
	while(q.size()>0){
		int top=q.front(); q.pop();
		ok[top]=true;
		if(top==v){
			cout<<"YES";
			return;
		}
		
		for(int i=0; i<ke[top].size(); i++){
			if(!ok[ke[top][i]]){
				ok[ke[top][i]]=true;
				q.push(ke[top][i]);
			}
		}
	}
	cout<<"NO";
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<1005; i++) ke[i].clear();
		
		int a,b;
		cin>>a>>b;
		while(b--){
			int u,v;
			cin>>u>>v;
			ke[u].pb(v);
			ke[v].pb(u);
		}
		int n;cin>>n;
		while(n--){
			memset(ok,false,sizeof(ok));
			int nguon,dich; cin>>nguon>>dich;
			BFS(nguon,dich);
			cout<<endl;
		}
		
	}
return 0;
}

