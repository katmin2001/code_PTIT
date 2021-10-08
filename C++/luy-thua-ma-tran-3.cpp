#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll m=1e9+7;
ll a[10][10], b[10][10];
int n,k;
void nhan(ll x[10][10], ll y[10][10]){
	ll tmp[10][10];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			ll res=0;
			for(int k=0; k<n; k++){
				res+=(x[i][k]*y[k][j])%m;
				res%=m;
			}
			tmp[i][j]=res;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j]=tmp[i][j];
		}
	}
}
void Pow(ll a[10][10], int n){
	if(n<=1) return;
	Pow(a,n/2);
	nhan(a,a);
	if(n%2==1) nhan(a,b);
}
void kenzy(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	Pow(a,k);
	ll s=0;
	for(int i=0; i<n; i++){
		s+=a[i][0];
		s%=m;
	}
	cout<<s;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

