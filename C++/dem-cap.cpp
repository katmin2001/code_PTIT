#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll luythua(int n, ll k){
	if(k==1) return n;
	if(k==0) return 1;
	ll tmp=luythua(n,k/2);
	if(k%2==0) return tmp*tmp;
	else return n*tmp*tmp;
}
void kenzy(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];
	int dem=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(luythua(a[i],b[j])>luythua(b[j],a[i])) dem++;
		}
	}
	cout<<dem<<endl;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
	}
return 0;
}

