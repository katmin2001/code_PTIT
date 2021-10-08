#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[105],n,k;
string s;
vector <string> v;
void next(int m){
	if(m>k){
		string u="";
		for(int i=1; i<=k; i++){
			u+=s[a[i]-1];
		}
		v.pb(u);
		u="";
		return;
	}
	for(int i=a[m-1]+1; i<=n-k+m; i++){
		a[m]=i;
		next(m+1);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		v.clear();
		cin>>n;
		cin>>s;
		for(k=1; k<=n; k++){
			next(1);
		}
		sort(v.begin(),v.end());
		for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
		cout<<endl;
	}
return 0;
}

