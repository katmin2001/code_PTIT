#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll a[100005];
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t; cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++){
			int check=0;
			for(int j=i+1; j<n; j++){
				if(a[j]>a[i]){
					check=1;
					cout<<a[j]<<" ";
					break;
				}
			}
			if(check==0) cout<<-1<<" ";
		}
		cout<<endl;
	}
return 0;
}

