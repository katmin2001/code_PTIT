#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int dp[1005][1005];
void kenzy(string s){
	int n=s.size();
	for(int i=0; i<n; i++){
		for(int j=0; j<=n; j++){
			dp[i][j]=0;
		}
	}
	int c=0;
	for(int i=1; i<=s.size(); i++){
		for(int j=1; j<=n; j++){
			if(s[i-1]==s[n-j]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			c=max(c,dp[i][j]);
		}
	}
	cout<<n-c;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		kenzy(s);
		cout<<endl;
	}
return 0;
}

