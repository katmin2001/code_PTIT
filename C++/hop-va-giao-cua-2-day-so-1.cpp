#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	int d=m+n;	
	int c[d]; int x=0;
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
//	for(int i=0; i<m; i++) cout<<b[i]<<" ";
//	cout<<x<<endl;
	sort(c,c+d);
//	for(int i=0; i<d; i++) cout<<a[i]<<" ";
//	cout<<endl;
	bool check[d];
	for(int i=0; i<d; i++) check[i]=true;
	for(int i=0; i<d; i++){
		for(int j=i+1; j<d; j++){
			if(c[j]==c[i]) check[j]=false;
		}
	}
	for(int i=0; i<d; i++) if(check[i]==true) cout<<c[i]<<" ";
	cout<<endl;
	for(int i=0; i<d; i++) if(check[i]==false) cout<<c[i]<<" ";
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

