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
		string s;
		cin>>s;
		int res=0;
		int n=s.size();
		stack <int> st;
		st.push(-1);
		for(int i=0; i<n; i++){
			if(s[i]=='(')st.push(i);
			else{
				st.pop();
				if(st.size()>0){
					res=max(res, i-st.top());
				}
				if(st.size()==0) st.push(i);
			}
		}
		if(res==0) cout<<2<<endl;
		else	cout<<res<<endl;
		
	}
return 0;
}

