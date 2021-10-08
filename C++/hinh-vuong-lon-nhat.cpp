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
    int r,c;
    cin >> r >> c;
    vector <vector<int> > dp(r+1,vector<int>(c+1,0));
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin >> dp[i][j];
            dp[i][j] += dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
    }
    int res = 0;
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
            int lo = 0, hi = min(r-i,c-j);
            while(hi>=lo){
                int mid = (hi+lo) >> 1;
                int con = dp[mid+i][mid+j] - dp[mid+i][j] - dp[i][mid+j] + dp[i][j];
                if(con == mid*mid){
                    res = max(res,mid);
                    lo = mid+1;
                }else hi = mid - 1;
            }
        }
    }
    cout <<res<<endl;
}

int main(){
    int T = 1;
    if(MULTI_TEST) cin>>T;
    while(T--){solve();}
}
