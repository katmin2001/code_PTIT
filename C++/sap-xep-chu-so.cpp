#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	ll a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int b[10]={0};
	for(int i=0; i<n; i++){
		while(a[i]){
			int h=a[i]%10;
			b[h]++;
			a[i]/=10;
		}
	}
	for(int i=0; i<10; i++){
		if(b[i]!=0) cout<<i<<" ";
	}
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

