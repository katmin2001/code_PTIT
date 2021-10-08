#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = (int)5e4;
const int mod = (int) 1e9 + 7;
const bool MULTI_TEST = true;
using namespace std;

int dp[101][N+1];

void solve(){
	int n,k;
	cin >> n >> k;
	
//for(int i=1;i<=11;i++){
//	for(int j=1;j<=11;j++){
//		cout << dp[i][j] << " ";
//	}
//	cout << endl;
//}
	cout << dp[n][k] << endl;
}

void init(){
	for(int i=1;i<=9;i++) dp[1][i] = 1;
	for(int i=1;i<100;i++){
		for(int j=1;j<=N;j++){
			for(int x=0;x<=9 && j+x<=N;x++){
				dp[i+1][j+x] += dp[i][j];
				dp[i+1][j+x] %= mod;
			}
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
