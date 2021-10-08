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



void solve(){
	int n,m;
	cin >> n >> m;
	vector<vector<ll> > dp(n+2,vector<ll>(m+2,0));
	dp[n+1][m] = 1;
	for(int i=n;i>=0;i--){
		for(int j=m;j>=0;j--){
			dp[i][j] += dp[i+1][j] + dp[i][j+1];
		}
	}
	cout << dp[0][0] << endl;
}

int main(){
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
