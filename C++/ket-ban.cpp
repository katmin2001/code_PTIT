#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
vector <int> ke[100005];
bool ok[100005];
int dem=0;
void DFS(int u){
	dem=1;
	ok[u]=true;
	dem++;
	for(int i=0; i<ke[u].size(); i++){
		if(!ok[ke[u][i]]){
			DFS(ke[u][i]);
		}
	}
}
//void BFS(int u){
//	dem=1;
//	queue <int> q;
//	q.push(u);
//	while(q.size()>0){
//		int top=q.front(); q.pop();
//		ok[top]=true;
//		for(int i=0; i<ke[top].size(); i++){
//			if(!ok[ke[top][i]]){
//				ok[ke[top][i]]=true;
//				q.push(ke[top][i]);
//				dem++;
//			}
//		}
//	}
//}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<100001; i++) ke[i].clear();
		memset(ok,false,sizeof(ok));
		int a,b;
		cin>>a>>b;
		for(int i=0; i<b; i++){
			int u,v;
			cin>>u>>v;
			ke[u].pb(v);
			ke[v].pb(u);
		}
		int x=0;
		for(int i=1; i<=a; i++){
			if(!ok[i]){
				dem=1;
				DFS(i);
				x=max(x,dem);
			}
			
		}
		cout<<x<<endl;
	}
return 0;
}

