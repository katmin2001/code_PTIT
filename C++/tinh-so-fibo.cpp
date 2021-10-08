#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int M=1e9+7;
ll n; ll f[2][2], m[2][2];
void nhan(ll x[2][2], ll y[2][2]){
	ll tmp[2][2];
	for(int i=0; i<2; i++){
		
		for(int j=0; j<2; j++){
			ll res=0;
			for(int k=0; k<2; k++){
				res+=(x[i][k]*y[k][j])%M;
				res%=M;
			}
			tmp[i][j]=res;
		}
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			f[i][j]=tmp[i][j];
		}
	}
}
void Pow(ll f[2][2], ll n){
	if(n<=1) return;
	Pow(f,n/2);
	nhan(f,f);
	if(n%2==1) nhan(f,m);
}
void kenzy(){
	cin>>n;
	f[0][0]=1;f[0][1]=1;
	f[1][0]=1;f[1][1]=0;
	m[0][0]=1;m[0][1]=1;
	m[1][0]=1;m[1][1]=0;
	if(n==0) cout<<0;
	else{
		Pow(f,n-1);
		cout<<f[0][0];	
	}
	
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

