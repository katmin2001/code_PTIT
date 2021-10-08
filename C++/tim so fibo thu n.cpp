#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int M=1e9+7;
ll n;
ll f[2][2],m[2][2];
void nmt(ll f[2][2], ll m[2][2]){
	ll x=(f[0][0]*m[0][0]%M+f[0][1]*m[1][0]%M)%M;
	ll y=(f[0][0]*m[0][1]%M+f[0][1]*m[1][1]%M)%M;
	ll z=(f[1][0]*m[0][0]%M+f[1][1]*m[1][0]%M)%M;
	ll t=(f[1][0]*m[0][1]%M+f[1][1]*m[1][1]%M)%M;
	f[0][0]=x;f[0][1]=y;f[1][0]=z;f[1][1]=t;
}
void Pow(ll f[2][2], ll n){
	if(n<=1) return;
	Pow(f,n/2);
	nmt(f,f);
	if(n&1) nmt(f,m);
}
void kenzy(){
	f[0][0]=f[0][1]=f[1][0]=1;f[1][1]=0;
	m[0][0]=m[0][1]=m[1][0]=1;m[1][1]=0;
	cin>>n;
	if(n==0) cout<<0;
	else{
		Pow(f,n-1);
		cout<<f[0][0];
	}
	cout<<endl;
}
int main(){
//code here tml
	int m;
	cin>>m;
	while(m--){
		kenzy();
	}
return 0;
}

