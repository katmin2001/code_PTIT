#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=1; i<=n; i++) cin>>a[i];
		for(int i=1; i<=n; i++){
			int vt=i;
			int ok=0;
			for(int j=i+1; j<=n; j++){
				if(a[j]>a[i]){
					vt=j;
					ok=1;
					break;
				}
			}
			if(ok==1){
				ok=0;
				for(int j=vt; j<=n; j++){
					if(a[j]<a[vt]){
						cout<<a[j]<<" ";
						ok=1;
						break;
					}
				}
			}
			
			if(ok==0) cout<<-1<<" ";
		}
		cout<<endl;
	}
return 0;
}

