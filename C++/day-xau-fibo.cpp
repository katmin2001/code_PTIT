#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll f[100];
void tao(){
	f[1]=1;
	f[2]=1;
	for(int i=3; i<93; i++){
		f[i]=f[i-1]+f[i-2];
	}
}
char fibo(ll n, ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2]) return fibo(n-2,k);
	else return fibo(n-1, k-f[n-2]);
}
int main(){
//code here tml
	int t;
	cin>>t;
	tao();
	while(t--){
		ll n,k;
		cin>>n>>k;
		cout<<fibo(n,k);
		cout<<endl;
	}
return 0;
}

