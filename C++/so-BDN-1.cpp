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
		ll n;
		cin>>n;
		vector<int> s;
		while(n){
			s.pb(n%10);
			n/=10;
		}
		reverse(s.begin(),s.end());
		int vt=s.size();
		for(int i=0; i<s.size(); i++){
			if(s[i]>=2){
				vt=i;
				break;
			}
		}
		for(int i=vt; i<s.size(); i++){
			s[i]=1;
		}
		ll res=0,a=1;
		for(int i=s.size()-1; i>=0; i--){
			res+=s[i]*a;
			a*=2;
		}
		cout<<res<<endl;
	}
	
return 0;
}

