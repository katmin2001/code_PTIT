#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int n=s1.size();
		int m=s2.size();
		int dp[n+5][m+5];
		for(int i=0; i<=n; i++){
			for(int j=0; j<=m; j++){
				if(i==0 || j==0) dp[i][j]=i+j;
				else if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
				else dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
			}
		}
		cout<<dp[n][m]<<endl;
	}
return 0;
}

