#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
bool ok[300];
vector <int> a;
vector <vector<int>> res;
int n,p,s,vt;
void sang(){
	for(int i=2; i<=200; i++){
		if(!ok[i]){
			a.pb(i);
			for(int j=i*i; j<=200; j+=i){
				ok[j]=true;
			}
		}
	}
}
void init(){
	cin>>n>>p>>s;
	vt=lower_bound(a.begin(),a.end(),p)-a.begin();
	for(int i=0; i<300; i++){
		ok[i]=false;
	}
	res.clear();
}
void Try(int i,vector <int> v, int sum){
	if(sum>s) return;
	if(sum==s&&v.size()==n){
		res.pb(v);
		return;
	}
	for(int j=i; j<a.size(); j++){
		if(ok[j]==false&&sum+a[j]<=s&&v.size()<n){
			v.pb(a[j]);
			ok[j]=true;
			Try(j+1,v,sum+a[j]);
			v.pop_back();
			ok[j]=false;	
		}
		
	}
}
void Out(){
	cout<<res.size()<<endl;
	for(int i=0; i<res.size(); i++){
		for(int j=0; j<res[i].size(); j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	sang();
	while(t--){
		init();
		vector<int> v; v.clear();
		Try(vt+1,v,0);
		Out();
	}
return 0;
}

