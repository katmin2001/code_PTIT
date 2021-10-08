#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int n;
	cin>>n;
	int a[1005], dp[1005]={0},res=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		dp[i]=1;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]+1); 
		}
		res=max(res,dp[i]);
	}
	cout<<res;
return 0;
}

