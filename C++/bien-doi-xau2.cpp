#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const bool MULTI_TEST = true;
using namespace std;



void solve(){
	string a,b;
	cin >> a >> b;
	vector<vector <int> > dp(a.size()+1,vector<int>(b.size()+1,0));
	for(int i=0;i<=a.size();i++) dp[i][0] = i;
	for(int i=0;i<=b.size();i++) dp[0][i] = i;
	for(int i=1;i<=a.size();i++){
		for(int j=1;j<=b.size();j++){
			if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
			else{
				dp[i][j] = min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+1;
			}
		}
	}
	cout << dp[a.size()][b.size()] <<endl;
}

int main(){
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
