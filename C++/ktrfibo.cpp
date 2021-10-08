#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[105];
		a[0]=0; a[1]=1;
		int check=0;
		for(int i=2; i<105; i++){
			a[i]=a[i-1]+a[i-2];
			if(a[i]==n){
				check=1;
				break;
			}
		}
		if(check==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}

