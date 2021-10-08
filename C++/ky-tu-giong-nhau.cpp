#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const int mod = (int)1e9+7;
const bool MULTI_TEST = true;
using namespace std;

int mark[201];

void solve(){
	int n,x,y,z;
	cin >> n >> x >> y >> z;
	priority_queue <pii,vector<pii>,greater<pii> > q;// pii = pair<int,int>
	q.push(pii(0,0));
	for(int i=0;i<=2*n;i++) mark[i] = 0;
	mark[0] = 0;
	int res = INT_MAX;
	while(!q.empty()){
		pii p = q.top();
		q.pop();
		if(mark[p.second] == 1) continue;
		if(p.second == n){
			res = min(res,p.first);
			break;
		}
		mark[p.second] = 1;
		q.push(pii(p.first+x,p.second+1));
		if(p.second > 0) q.push(pii(p.first+y,p.second-1));
		if(p.second<n) q.push(pii(p.first+z,p.second*2));
	}
	cout << res << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
