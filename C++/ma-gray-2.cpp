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
		string a,g="";
		cin>>a;
		g=a[0];
		for(int i=1; i<a.size(); i++){
			int n=g.size()-1;
			if(g[n]!=a[i]) g+="1";
			else g+="0";
		}
		cout<<g<<endl;
	}
return 0;
}

