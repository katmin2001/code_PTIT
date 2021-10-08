#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll gth(int n){
	ll gt=1;
	for(int i=2; i<=n; i++){
		gt*=i;
	}
	return gt;
}
int main(){
//code here tml
	ll n,k;
	cin>>n>>k;
	ll gt=1;
	int check=0;
	for(int i=2; i<=n; i++){
		gt*=i;
		while(gt%2==0&&k>0){
			gt/=2;
			k--;
		}
		if(k==0){
			check=1;break;
		} 
	}
	if(check==1) cout<<"Yes";
	else cout<<"No";
return 0;
}

