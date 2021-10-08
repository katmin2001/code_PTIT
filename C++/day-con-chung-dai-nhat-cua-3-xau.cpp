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

int dp[101][101][101];

void solve(){
	int x,y,z;
	cin >> x >> y >> z;
	string a[3];
	for(int i=0;i<3;i++) cin >> a[i];
	for(int i=0;i<=x;i++) for(int j=0;j<=y;j++) for(int k=0;k<=z;k++) dp[i][j][k] = 0;
	for(int i=1;i<=x;i++) for(int j=1;j<=y;j++) for(int k=1;k<=z;k++){
		if(a[0][i-1] == a[1][j-1] && a[0][i-1] == a[2][k-1]) dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
		else dp[i][j][k] = max(max(dp[i][j][k-1],dp[i][j-1][k]),dp[i-1][j][k]);
	}
	cout << dp[x][y][z] <<endl;
}

int main(){
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
