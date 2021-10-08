#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	string a;
	cin>>a;
	n=a.size();
	int i=n-2;
	while(i>0 && a[i]-'0'>=a[i+1]-'0') i--;
	if(i==0) cout<<"BIGGEST";
	else{
		int k=n-1;
		while(a[k]-'0'<=a[i]-'0') k--;
		char tmp=a[k]; a[k]=a[i]; a[i]=tmp;
		int l=i+1; int r=n-1;
		while(l<r){
			char tmp=a[l]; a[l]=a[r]; a[r]=tmp;
			l++; r--;
		}
		for(int i=0; i<n; i++) cout<<a[i];
	}
	
	cout<<endl;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<x<<" ";
		kenzy();
	}
return 0;
}

