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
		string a;
		cin>>a;
		for(int i=0; i<a.size(); i++){
			if(i==0) cout<<a[i];
			else{
				if(a[i]!=a[i-1]) cout<<1;
				else cout<<0;
			}
			
		}
		cout<<endl;
	}
return 0;
}

