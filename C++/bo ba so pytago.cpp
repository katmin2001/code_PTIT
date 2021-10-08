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
		ll a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			a[i]*=a[i];
		}
		sort(a,a+n);
//		for(int i=0; i<n; i++){
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
//		int x=n-1;
		
		int check=0;
		for(int i=n-1; i>=2; i--){
			int l=0; int r=i-1;
			while(l<r){
				
				if(a[i]==a[l]+a[r]){
					check=1;
					break;
				}
				if(a[i]>a[l]+a[r]) l++;
				else r--;
			}
			if(check==1) break;
		}
		if(check==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}

