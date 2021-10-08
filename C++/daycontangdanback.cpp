#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[100];
int x[100];
int k,n;
int res=0;
void Try(int m){
	if(m>k){
		int ok=1;
		for(int i=k; i>=1; i--){
			if(x[a[i]]<x[a[i-1]]){
				ok=0; break;
			}
		}
		if(ok==1) res++;
		return;
	}
	for(int i=a[m-1]+1; i<=n-k+m; i++){
		a[m]=i;
		Try(m+1);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>x[i];
	}
	Try(1);
	cout<<res;
return 0;
}

