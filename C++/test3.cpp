#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
 
void kenzy(){
	ll n;
	cin>>n;
	ll a[n];
	ll check=0,dem=0;
	ll b[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=-1;
	}
	ll Lmax[n], Rmin[n];
	Lmax[0]=a[0];
	for(int i=1; i<n; i++){
		Lmax[i]=max(a[i],Lmax[i-1]);
	}
 
	Rmin[n-1]=a[n-1];
	for(int i =n-2; i>=0; i--){
		Rmin[i]=min(a[i],Rmin[i+1]);
	}
//	if(a[0]<=Rmin[1]) dem++;
//	if(a[n-1] >= Lmax[n-2]) dem++;
	for(int i=1; i<n-1; i++){
		if(Lmax[i]<=Rmin[i+1]){
			b[i]=i+1;
			dem++;
		} 
	}
	cout<<dem<<endl;
	if(dem==0) cout<<endl;
	else{
		for(int i=0; i<n; i++){
			if(b[i]!=-1) cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	
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
 
