#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n; cin>>n;
	int a[n];
	int b[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=a[i];
	} 
	sort(b,b+n);
	int check=1;
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]&& a[i]!=b[n-1-i]){
			cout<<"No"<<endl;
			check=0;
			break;
		}
	}
	if(check==1) cout<<"Yes"<<endl;
}
int main(){
//code here tml
	int t; cin>>t;
	while(t--){
		kenzy();
	}
return 0;
}

