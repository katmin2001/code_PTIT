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



void solve(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	int dp[k+1];
	for(int i=1;i<=k;i++) dp[i] = 0;
	dp[0] = 1;
	for(int i=1;i<=k;i++){
		for(int j=0;j<n;j++){
			if(i >= a[j]){
				dp[i] += dp[i-a[j]];
				dp[i] %= mod;
			}
		}
	}
	cout << dp[k] << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
