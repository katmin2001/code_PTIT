#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int vs[100],a[100],n;
char d[100];
void hvdq(int m){
	if(m>n){
		for(int i=1; i<=n; i++){
			d[i]=a[i]+'A'-1;
			cout<<d[i];	
		}
		cout<<" ";
		return;
	}
	for(int i=1; i<=n; i++){
		if(vs[i]==0){
			a[m]=i; vs[i]=1;
			hvdq(m+1);
			vs[i]=0;
		}
	}
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		n=a.length();
		hvdq(1);
		cout<<endl;
	}
return 0;
}

