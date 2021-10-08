#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		if(i%2==1) cout<<0<<" ";
		else cout<<1<<" ";
	}
	cout<<endl;
	for(int i=1; i<=n; i++){
		if(i%2==1) cout<<1<<" ";
		else cout<<0<<" ";
	}
return 0;
}

