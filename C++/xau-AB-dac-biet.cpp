#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n, a[100], k;
string s="";
vector <string> res;
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n-k){
			for(int l=1; l<=n-k; l++){
				if(l==1&&a[l]==1){
					string tmp=s;
					for(int p=1; p<=n-k; p++){
						if(a[p]!=0) tmp+='B';
						else tmp+='A';
					}
					res.pb(tmp);
				}
				if(l==n-k&&a[l]==1){
					string tmp="";
					for(int p=1; p<=n-k; p++){
						if(a[p]!=0) tmp+='B';
						else tmp+='A';
					}
					tmp+=s;
					res.pb(tmp);
				}
				if(a[l]==1 &&a[l-1]==1&&l>1){
					string tmp="";
					for(int p=1; p<=n-k; p++){
						if(p==l) tmp+=s;
						if(a[p]!=0) tmp+='B';
						else tmp+='A';
					}
					res.pb(tmp);
				}
			}
		}
		else Try(i+1);
	}
}
int main(){
//code here tml
	cin>>n>>k;
	for(int i=1; i<=k; i++){
		s+='A';
	}
	Try(1);
	sort(res.begin(),res.end());
	cout<<res.size()<<endl;
	for(int i=0; i<res.size(); i++){
		cout<<res[i]<<endl;
	}
return 0;
}

