#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int b[1000];
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		bool check[n];
		
		for(int i=0; i<n; i++) check[i]=true;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[j]>=a[i]) check[i]=false;
			}
		}
//		int x=0;
//		for(int i=0; i<n; i++){
//			if(check[i]==true){
//				b[x]=a[i];
//				x++;
//			}
//		}
//		sort(b,b+1000);
//		for(int i=999; i>=1000-x; i--) cout<<b[i]<<" ";
//		cout<<endl;
		for(int i=0; i<n; i++){
			if(check[i]==true) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
return 0;
}

