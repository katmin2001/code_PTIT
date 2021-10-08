#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int dp[101][25001];
int main(){
//code here tml
	int m,n;
	cin>>m>>n;
	int a[n+5];
	for(int i=1; i<=n; i++) cin>>a[i];
	memset(dp,0,sizeof(dp));
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(j>=a[i]){
				dp[i][j]=max(dp[i-1][j], dp[i-1][j-a[i]]+a[i]);
			}
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][m];
return 0;
}

