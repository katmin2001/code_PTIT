#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

void kenzy(){
	int n,q;
	cin>>n>>q;
	int a[100005]={0};
	for(int i=1; i<=q; i++){
		int x=0,y=0;
		cin>>x>>y;
		for(int j=x; j<=y; j++){
			a[j]++;
		}
	}
	for(int i=1; i<=n; i++){
		if(a[i]%2==0) cout<<0<<" ";
		else cout<<1<<" ";
	}
}
int main(){
//code here tml

		kenzy();

return 0;
}

