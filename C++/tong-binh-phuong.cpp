#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = (int)1e4;
const bool MULTI_TEST = true;
using namespace std;

int dp[N+2];

void solve(){
	int n;
	cin >> n;
	cout << dp[n] <<endl;
}

void init(){
	int p2[101];
	for(int i=1;i<=100;i++) p2[i] = i*i;
	for(int i=1;i<=N;i++) dp[i] = INT_MAX;
	dp[0] = 0;
	for(int i=1;i<=N;i++){
		for(int j=1;p2[j]<=i;j++){
			dp[i] = min(dp[i-p2[j]]+1,dp[i]);
		}
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
