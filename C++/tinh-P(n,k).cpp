#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;
const int N = (int) 1e3 + 5;
const int mod = (int)1e9 + 7;
const bool MULTI_TEST = true;

ll dp[N][N];

void solve(){
    int n,k;
    cin >> n >> k;
    cout <<dp[k][n] <<endl;
}

void init(){
	ll gt[1001];
	gt[0] = 1;
	for(int i=1;i<=1000;i++)
		gt[i] = (gt[i-1]*(ll)i)%mod;
    for(int i=1;i<=1000;i++){
        dp[1][i] = (ll)i;
        dp[i][i] = 1;
    }
    for(int i=2;i<1000;i++){ 
        for(int j=i+1;j<=1000;j++){
            dp[i][j] = (dp[i-1][j-1] + dp[i][j-1]) % mod;
        }
    }
    for(int i=2;i<1000;i++){ 
        for(int j=i+1;j<=1000;j++){
            dp[i][j] = (dp[i][j] * gt[i]) % mod;
        }
    }
}

int main(){
    init();
    int T = 1;
    if(MULTI_TEST) cin>>T;
    while(T--){solve();}
}
