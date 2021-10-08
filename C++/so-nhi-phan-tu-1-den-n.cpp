#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll b[10001]={0};
ll np(int n){
	vector <int> a;
	while(n){
		a.pb(n%2);
		n/=2;
	}
	ll res=0;
	for(int i=a.size()-1; i>=0; i--){
		res=10*res+a[i];
	}
	return res;
}
void kenzy(int n){
	b[0]=0; b[1]=1;
	for(int i=2; i<=n; i++){
		b[i]=np(i);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	kenzy(10000);
	while(t--){
		int n;
		cin>>n;
		for(int i=1; i<=n; i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
return 0;
}

