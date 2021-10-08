#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		int res=0;
		for(int i=0; i<n-1; i++){
			sort(a,a+n);
			if(a[i]!=0){
				res+=a[i]+a[i+1];
				a[i+1]+=a[i];
				a[i]=0;
			}
		}
		cout<<res<<endl;
	}
return 0;
}

