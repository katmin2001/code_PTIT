#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int dem=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]+a[i]==k) dem++;
		}
	}
	cout<<dem<<endl;
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

