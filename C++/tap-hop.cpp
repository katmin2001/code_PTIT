#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,k,s,a[100],res;
void Try(int m){
	if(m>k){
		int x=0;
		for(int i=1; i<=k; i++){
			x+=a[i];
		}
		if(x==s) res++;
		return;
	}
	for(int i=a[m-1]+1; i<=n-k+m; i++){
		a[m]=i;
		Try(m+1);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	while(cin>>n>>k>>s){
		if(n==0&&k==0&&s==0){
			break;
		}
		else{
			res=0;
			Try(1);
			cout<<res<<endl;
		}
		
	}	
return 0;
}

