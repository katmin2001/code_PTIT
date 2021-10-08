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
	int i=n-2;
	while(i>=0 && a[i]>=a[i+1]) i--;
	int k=n-1;
	while(a[k]<=a[i]) k--;
	int tmp=a[k]; a[k]=a[i]; a[i]=tmp;
	int l=i+1; int r=n-1;
	while(l<r){
		int tmp=a[l]; a[l]=a[r]; a[r]=tmp;
		l++; r--;
	}
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
//		int x;
//		cin>>x;
		kenzy();
	}
return 0;
}

