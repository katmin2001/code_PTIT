#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	ll a[n], b[n-1];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n-1; i++){
		cin>>b[i];
	}
	int k;
	for(int i=0; i<n-1; i++){
		if(a[i]!=b[i]){
			k=i;
			break;
		}
	}
	cout<<k+1<<endl;
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

