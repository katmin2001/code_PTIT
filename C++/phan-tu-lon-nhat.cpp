#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	for(int i=n-1; i>=n-k; i--) cout<<a[i]<<" ";
	cout<<endl;
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

