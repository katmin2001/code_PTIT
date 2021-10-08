#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int l=0, r=n-1;
	while(r>l){
		cout<<a[r]<<" "<<a[l]<<" ";
		r--; l++;
	}
	if(n%2==1) cout<<a[r];
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

