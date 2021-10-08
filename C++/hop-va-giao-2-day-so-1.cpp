#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int x;
		int d[100005]={0};
		for(int i=0; i<a+b; i++){
			cin>>x;
			d[x]++;
		}
		for(int i=0; i<100000; i++){
			if(d[i]>0) cout<<i<<" ";
		}
		cout<<endl;
		for(int i=0; i<100000; i++){
			if(d[i]>1) cout<<i<<" ";
		}
		cout<<endl;
	}
return 0;
}

