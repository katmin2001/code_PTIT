#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
struct data{
	int hs,mu;
};
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		data a[n],b[m];
		for(int i=0; i<n; i++){
			cin>>a[i].hs;
			a[i].mu=i;
		}
		for(int i=0; i<m; i++){
			cin>>b[i].hs;
			b[i].mu=i;
		}
		vector< vector <data> > res;
		for(int i=0; i<n; i++){
			vector <data> tmp;
			for(int j=0; j<m; j++){
				tmp.pb({a[i].hs*b[j].hs, a[i].mu+b[j].mu});
			}
			res.pb(tmp);
		}
		int mu=0;
		while(mu<m+n-1){
			int hs=0;
			for(int i=0; i<res.size(); i++){
				for(int j=0; j<res[i].size(); j++){
					if(res[i][j].mu==mu) hs+=res[i][j].hs;
				}
			}
			cout<<hs<<" ";
			mu++;
		}
		cout<<endl;
	}
return 0;
}

