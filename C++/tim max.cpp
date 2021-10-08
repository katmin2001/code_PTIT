#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll m=1000000000+7;
void kenzy(){
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0; i<n;i++) cin>>a[i];
	sort(a,a+n);
	ll sum=0;
	for(int i=0; i<n; i++){
		sum=(sum+a[i]*i)%m;
	}
	cout<<sum;
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

