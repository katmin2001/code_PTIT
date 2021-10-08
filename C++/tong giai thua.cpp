#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll gth(int n){
	ll gt=1;
	for(int i=1; i<=n; i++){
		gt*=i;
	}
	return gt;
}
int main(){
//code here tml
	int n;
	cin>>n;
	ll s=0;
	for(int i=1; i<=n; i++){
		s+=gth(i);
	}
	cout<<s;
return 0;
}

