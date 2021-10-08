#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	int dem=0;
	for(int i=n-1; i>0; i--){
		if(a[i]-a[i-1]>1) dem+=a[i]-a[i-1]-1;
	}
	cout<<dem<<endl;
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

