#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,m;
	cin>>n>>m;
	ll a[n],b[m],c[m+n];
	int x=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		c[x]=a[i];
		x++;
	} 
	for(int i=0; i<m; i++){
		cin>>b[i];
		c[x]=b[i];
		x++;
	} 
	sort(c,c+(m+n));
	for(int i=0; i<n+m; i++) cout<<c[i]<<" ";
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

