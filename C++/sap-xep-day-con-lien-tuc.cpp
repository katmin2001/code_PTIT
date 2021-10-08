#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0; i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	} 
	sort(b,b+n);
	int x;
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]){
			cout<<i+1<<" ";
			x=i;
			break;
		} 
	}
	for(int i=n-1; i>=x; i--){
		if(a[i]!=b[i]){
			cout<<i+1<<endl;
			break;
		} 
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

