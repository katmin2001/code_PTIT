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
		for(int i=0; i<1001; i++) ke[i].clear();
		int a,b;
		cin>>a>>b;
		for(int i=0; i<b; i++){
			int u,v;
			cin>>u>>v;
			ke[u].pb(v);
		}
		int ok=1;
		for(int i=1; i<=a; i++){
			int dem=0;
			for(int j=1; j<=a; j++){
				if(j==i) continue;
				else{
					for(int x=0; x<ke[j].size(); x++){
						if(ke[j][x]==i) dem++;
					}
				}
				
			}
			if(dem!=ke[i].size()){
				ok=0;
				break;
			}
		}
		cout<<ok<<endl;
	}
return 0;
}

