#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		int i=n-1;
		int j=n/2-1;
		int res=n;
		while(i>=n/2&&j>=0){
			if(a[i]>=2*a[j]){
				res--;
				i--;
				j--;
			}
			else j--;
		}
		cout<<res<<endl;
	}
return 0;
}

