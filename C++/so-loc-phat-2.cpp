#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[100],n;
vector <string> s;
void np(int m){
		if(m>n){
			string u="";
			for(int i=1; i<=n; i++){
				if(a[i]==0) u+="6";
				else u+="8";
			}
			s.pb(u);
			u="";
			return;
		}
		for(int i=0; i<=1; i++){
			a[m]=i;
			np(m+1);
		}

}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		s.clear();
		int x;
		cin>>x;
		n=1;
		for(int i=1; i<=x; i++){
			n=i;
			np(1);
		}
		cout<<s.size()<<endl;
		for(int i=s.size()-1; i>=0; i--) cout<<s[i]<<" ";
		cout<<endl;
	}
return 0;
}

