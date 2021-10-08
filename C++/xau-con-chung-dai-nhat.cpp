#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int f[1002][1002];
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int res=0;
		for(int i=1; i<=s1.size(); i++){
			for(int j=1; j<=s2.size(); j++){
				if(s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1]+1;
				else f[i][j]=max(f[i][j-1], f[i-1][j]);
				res=max(f[i][j],res);
			}
		}
		cout<<res<<endl;
	}
return 0;
}

