#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,k,a[100];
vector <string> s;
void Try(int m){
	if(m>k){
		string u="";
		for(int i=1; i<=k; i++){
			u+=string(1,a[i]+64);
		}
		s.pb(u);
		u="";
		return;
	}
	for(int i=a[m-1]+1; i<=n-k+m; i++){
		a[m]=i;
		Try(m+1);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		s.clear();
		cin>>n>>k;
		Try(1);
		for(int i=0; i<s.size(); i++){
			cout<<s[i]<<endl;
		}
	}
return 0;
}

