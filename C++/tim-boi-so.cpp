#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int m, a[100], n;
bool ok;
ll res=1e18;
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==m){
			ll s=0;
			for(int l=1; l<=m; l++){
				s=s*10+a[l];
			}
			s*=9;
			if(s%n==0 && s>=n){
				res=min(res,s);
				ok=true;
			}
		}
		else Try(i+1);
	}
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		m=1;
		ok=false;
		res=1e18;
		cin>>n;
		while(m<=17&&!ok){
			Try(1);
			m+=1;
		}
		cout<<res;
		cout<<endl;
	}
return 0;
}

