#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	int a[n]={0};
	int k=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		k+=a[i];
	}
	if(k%2==1) cout<<"NO"<<endl;
	else{
		int s=k/2;
		int dp[s+1]={0};
		dp[0]=1;
		for(int i=0; i<n; i++){
			for(int j=s; j>=a[i]; j--){
				if(dp[j-a[i]]==1) dp[j]=1;
			}
		}
		if(dp[s]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
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

