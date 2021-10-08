#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
#define mp make_pair
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <int> st;
		st.push(-1);
		int n=s.size();
		int res=0;
		for(int i=0; i<n; i++){
			if(s[i]=='(') st.push(i);
			else{
				st.pop();
				if(st.size()>0) res=max(res, i-st.top());
				if(st.size==0) st.push(i);
			}
		}
		if(res==0) cout<<2<<endl;
		else cout<<res<<endl;
	}
return 0;
}

