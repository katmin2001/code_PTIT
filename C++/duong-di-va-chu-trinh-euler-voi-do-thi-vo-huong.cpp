#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

vector <int> ke[1005];

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<1001; i++){
			ke[i].clear();
		}
		int a,b;
		cin>>a>>b;
		for(int i=0; i<b; i++){
			int u,v;
			cin>>u>>v;
			ke[u].pb(v);
			ke[v].pb(u);
		}
		int res=0;
		for(int i=1; i<=a; i++){
			if(ke[i].size()%2==1){
				res++;
			}
		}
		if(res==0) cout<<2;
		else if(res<=2) cout<<1;
		else cout<<0;
		cout<<endl;
	}
return 0;
}

