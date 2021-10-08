#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n;
int a[1000];
void npdq(int m){
	if(m>n){
		for(int i=1; i<=n; i++){
			if(a[i]==1) cout<<"B";
			else cout<<"A";
		} 
		cout<<" " ;
		return;
	}
	for(int i=0; i<=1; i++){
		a[m]=i;
		npdq(m+1);
	}
}
void kenzy(){
	cin>>n;
	npdq(1);
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

