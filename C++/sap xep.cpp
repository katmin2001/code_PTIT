#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int n;
	cin>>n;
	ll a[n];
	int t;
	if(n%2==0) t=n/2;
	else t=n/2+1;
	ll chan[n/2];
	ll le[t];
	int j=0,x=0;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++){
		if(i%2==1){
			chan[j]=a[i];
			j++;
		}
		else{
			le[x]=a[i];
			x++;
		}
	}
	sort(chan,chan+n/2);
	sort(le,le+t);
//	for(int i=0; i<n/2; i++) cout<<chan[i]<<" ";
//	cout<<endl;
//	for(int i=0; i<t; i++) cout<<le[i]<<" ";
//	cout<<endl;
	x=0,j-=1;
	for(int i=0; i<n; i++){
		if(i%2==0){
			cout<<le[x]<<" ";
			x++;
		}
		else{
			cout<<chan[j]<<" ";
			j--;
		}
	}
return 0;
}

