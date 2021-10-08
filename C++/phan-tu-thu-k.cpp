#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int m,n,k;
	cin>>m>>n>>k;
	int a[m],b[n];
	int x=0;
	int c[m+n];
	for(int i=0; i<m; i++){
		cin>>a[i];
		c[x]=a[i];
		x++;
	} 
	for(int i=0; i<n; i++){
		cin>>b[i];
		c[x]=b[i];
		x++;
	} 
	sort(c,c+m+n);
	cout<<c[k-1]<<endl;
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

