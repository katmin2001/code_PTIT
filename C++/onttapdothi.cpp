#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
#define mp make_pair
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int v,e;
		cin>>v>>e;
		vector <int> ke[v+5];
		while(e--){
			int a,b;
			cin>>a>>b;
			ke[a].pb(b);
		}
		for(int i=1; i<=v; i++){
			sort(all(ke[i]));
		}
		for(int i=1; i<=v; i++){
			cout<<i<<":";
			for(int j=0; j<ke[i].size(); j++){
				cout<<ke[i][j]<<" ";
			}
			cout<<endl;
		}
	}
return 0;
}

