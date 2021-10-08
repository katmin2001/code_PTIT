#include<bits/stdc++.h>

using namespace std;
void kenzy(){
    long long dp[105]={0};
    int n;
    cin>>n;
    dp[1]=1; dp[2]=2; dp[3]=4;
    for(int i=4; i<=n; i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[n];
}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        kenzy();
        cout<<endl;
    }
    
    return 0;
}