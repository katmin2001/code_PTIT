#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,a[100];
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			int ok=1;
			if(a[1]==1&&a[n]==0){
				for(int l=1; l<=n; l++){
					if(a[l]==1&&a[l+1]==1){
						ok=0;
						break;
					}
				}
			}
			else ok=0;
			if(ok==1){
				for(int l=1; l<=n; l++){
					if(a[l]==1) cout<<'H';
					else cout<<'A';
				}
				cout<<endl;
			}
		}
		else Try(i+1);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(1);
	}
return 0;
}

