#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int dp[105][105];
void kenzy(){
	int n;
	cin>>n;
	string a;
	cin>>a;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i-1]==a[j-1]&&i!=j) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<dp[n][n]<<endl;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
	}
return 0;
}

