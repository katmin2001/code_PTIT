#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int a,b,c,k;
	cin>>a>>b>>c>>k;
	int x=k-1;
	int boc=0;
	if(a<=x) boc+=a;
	else boc+=x;
	if(b<=x) boc+=b;
	else boc+=x;
	if(c<=x) boc+=c;
	else boc+=x;
	cout<<boc+1;
return 0;
}

