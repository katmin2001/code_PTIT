#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	ll a[n],b[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	ll s=0;
	for(int i=0; i<n; i++){
		s+=a[i]*b[n-i-1];
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

