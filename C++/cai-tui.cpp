#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,m;
struct dat{
	int w=0, v=0;
};
dat a[1005];
int dp[1005][1005];
void kenzy(){
	int res=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(j<a[i].w) dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(dp[i-1][j], dp[i-1][j-a[i].w]+a[i].v);
			res=max(res,dp[i][j]);
		}
	}
	cout<<res;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1; i<=n; i++) cin>>a[i].w;
		for(int i=1; i<=n; i++) cin>>a[i].v;
		kenzy();
		cout<<endl;
	}
return 0;
}

