#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[20];
void kenzy(int a[], int n, int k){
	for(int i=1; i<=n; i++) a[i]=i;
	while(1){
		for(int i=1; i<=k; i++){
			cout<<a[i];
		}
		cout<<" ";
		int i=k;
		while(i>0&&a[i]>=n-k+i) i--;
		if(i==0) return;
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[i]+j-i;
		}
	}
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		kenzy(a,n,k);
		cout<<endl;
	}
return 0;
}

