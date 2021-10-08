#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int tim(int a[], int l, int r, int k){
	if(r>=l){
		int mid=l+(r-l)/2;
		if(a[mid]==k) return mid;
		if(a[mid]>k) return tim(a,l,mid-1,k);
		else return tim(a,mid+1,r,k);
	}
	return -1;
}
void kenzy(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int x=tim(a,0,n-1,k);
	if(x==-1) cout<<"NO"<<endl;
	else cout<<x+1<<endl;

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

