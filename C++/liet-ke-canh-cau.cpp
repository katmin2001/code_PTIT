#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const int MOD = (int)1e9+7;
const bool MULTI_TEST = true;
using namespace std;

vector<vector<int> > edges;
int n,k,start;
vector<bool> mark;
int ok = 0,cnt,originCnt;
pii check;

void bfs(int S){
    // cnt = 0;
	mark[S] = 1;
	queue <int> q;
	q.push(S);
	while(!q.empty()){
        // cnt++;
		int u = q.front();
		q.pop();
		for(int v=0;v<edges[u].size();v++){
			if(mark[edges[u][v]] == 0 && pii(min(u,edges[u][v]),max(u,edges[u][v])) != check){
				mark[edges[u][v]] = 1;
				// d[edges[u][v]] = u;
				q.push(edges[u][v]);
			}
		}
	}
}

void process(){
    cnt = 0;
    for(int i=1;i<=n;i++){
        if(mark[i] == 0){
            cnt++;
            bfs(i);
        }
    }
}

void solve(){
	edges.clear();
	cin >> n >> k;
	edges.resize(n+5,vector<int>(0));
    originCnt = 0;
    vector <pii> e;
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		edges[u].pb(v);
		edges[v].pb(u);
        e.pb(pii(min(u,v),max(u,v)));
	}
	mark.clear();
    mark.resize(n+1,0);
    check = pii(0,0);
    for(int i=1;i<=n;i++){
        if(mark[i] == 0){
            originCnt++;
            bfs(i);
        }
    }
    for(auto i:e){
        mark.clear();
        mark.resize(n+1,0);
        check = i;
        process();
        if(cnt != originCnt) cout << i.first << ' ' << i.second << ' ';
    }
    cout << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
