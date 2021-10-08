#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;
const int N = (int) 1e5;
const ll mod = (ll)1e9 + 7;
const bool MULTI_TEST = true;

void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int &i:a){
        cin >> i;
        i%=k;
    }
    vector <vector<int> > dp(n+1,vector<int>(k,INT_MIN));
    dp[0][0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<k;j++){
            // dp[i][j] = dp[i-1][j];
            dp[i][j] = max(dp[i-1][(j+k-a[i-1])%k]+1,dp[i-1][j]);
        }
    }
    cout << dp[n][0] <<endl;
}

int main(){
    int T = 1;
    if(MULTI_TEST) cin>>T;
    while(T--){solve();}
}
