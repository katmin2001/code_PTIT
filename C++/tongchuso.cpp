#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int dp[1005][10005];
int a,b;
int nn(int a, int b){
	if(a>b||a>900||a<0||b>8100||b<0) return -1;
	if(b==0&&a==0) return 0;
	if(dp[a][b]!=-1) return dp[a][b];
	int res=101;
	for(int i=9; i>=1; i--){
		int t=nn(a-i,b-pow(i,2));
		if(t!=-1) res=min(t+1,res);
		
	}
	return dp[a][b]=res;
}
void kenzy(int a,int b){
	memset(dp,-1,sizeof(dp));
	dp[0][0]=0;
	int tmp=nn(a,b);
	if(tmp>100||tmp==-1) cout<<-1;
	else{
		while(a>0&&b>0){
			for(int i=1; i<=9; i++){
				if(a>=1&&b>=pow(i,2)&&dp[a][b]==dp[a-i][b-i*i]+1){
					cout<<i;
					a-=i;
					b-=pow(i,2);
					break;
				}
			}
		}
	}
	cout<<endl;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		kenzy(a,b);
	}
return 0;
}

