#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = (int)1e4 + 3;
const bool MULTI_TEST = true;
using namespace std;

ll dp[N];

void solve(){
	int n;
	cin >> n;
	cout << dp[n] << endl;
}

void init(){
	priority_queue <ll,vector<ll>,greater<ll> > q;
	q.push(1);
	dp[0] = 0;
	for(int i=1;i<= (int)1e4;i++){
		while(q.top() == dp[i-1]) q.pop();
		dp[i] = q.top();
		q.push(dp[i]*2);
		q.push(dp[i]*3);
		q.push(dp[i]*5);
		q.pop();
//		cout << dp[i] << ' ';
	}
}

int main(){
	init();
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
