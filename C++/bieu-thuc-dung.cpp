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
		string s;
		cin>>s;
		stack <char> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='['||s[i]==']'&&st.size()==0) st.push(s[i]);
			else if(s[i]==']'){
				if(st.top()=='['&&st.size()>0){
					st.pop();
				}
				else st.push(s[i]);
			}
		}
		int d1=0,d2=0;
		while(st.size()>0){
			if(st.top()=='[') d1++;
			else d2++;
			st.pop();
		}
		int d=d1/2+d2/2+d1%2+d2%2;
		cout<<d<<endl;
	}
return 0;
}

