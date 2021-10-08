#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
//code here tml
int n; cin>>n;
if(nt(n)) cout<<"YES";
else cout<<"NO";
return 0;
}

