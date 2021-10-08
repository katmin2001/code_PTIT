#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	vector <int> b;
	for(int i=0; i<n; i++){
		b.pb(a[i]);
		sort(b.begin(),b.end());
		cout<<"Buoc "<<i<<": ";
		for(int j=0; j<b.size(); j++){
			cout<<b[j]<<" ";
		}
		cout<<endl;
	}
return 0;
}

