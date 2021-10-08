#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,k,a[100],v[100];
vector <vector<int>> s;
void init(){
	s.clear();
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>v[i];
//	sort(v+1,v+n+1);
}
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			int x=0;
			for(int l=1; l<=n; l++){
				if(a[l]==1) x+=v[l];
			}
			if(x==k){
				vector<int> h;
				for(int l=1; l<=n; l++){
					if(a[l]==1) h.pb(v[l]);
				}
				s.pb(h);
			}
		}
		else Try(i+1);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	init();
	Try(1);
//		sort(s.begin(),s.end());
		for(int i=0; i<s.size(); i++){
			for(int j=0; j<s[i].size(); j++){
				cout<<s[i][j]<<" ";
			}
			cout<<endl;
		}
	
		cout<<s.size();
return 0;
}

