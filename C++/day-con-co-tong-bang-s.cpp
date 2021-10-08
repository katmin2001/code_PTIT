#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,s;
	cin>>n>>s;
	int a, dp[40005]={0};
	dp[0]=1;
	for(int i=1; i<=n; i++){
		cin>>a;
		dp[a]=1;
		for(int j=s; j>=a; j--){
			if(dp[j-a]==1&&(j-a)!=a) dp[j]=1;
		}
	}
	if(dp[s]==1) cout<<"YES";
	else cout<<"NO";
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

