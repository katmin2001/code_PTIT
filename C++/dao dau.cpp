#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	ll s=0;
	for(int i=0; i<n; i++){
		if(a[i]<0&&k>0){
			a[i]=0-a[i];
			k--;
		}
	}
	if(k==0){
		for(int i=0; i<n; i++) s+=a[i];
		cout<<s;
	}
	else{
		sort(a,a+n);
		if(k%2==0){
			for(int i=0; i<n; i++) s+=a[i];
		}
		else{
			a[0]=-a[0];
			for(int i=0; i<n; i++) s+=a[i];
		}
		cout<<s;
	}
	
}
int main(){
//code here tml
//	int t;
//	cin>>t;
//	while(t--){
		kenzy();
//	}
return 0;
}

