#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll m=1e9+7;
void kenzy(){
	int n,k;
	cin>>n>>k;
	ll dp[n+5]={0};
	dp[0]=1; dp[1]=1;
	for(int i=2; i<=n; i++){
		for(int j=1; j<=min(i,k); j++){
			dp[i]+=dp[i-j];
			dp[i]%=m;
		}
	}
	cout<<dp[n]<<endl;
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

