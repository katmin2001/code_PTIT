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
		stack <string> st;
		for(int i=s.size()-1; i>=0; i--){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
				string s1=st.top(); st.pop();
				string s2=st.top(); st.pop();
				string res=s1+s2+s[i];
				st.push(res);
			}
			else st.push(string(1,s[i]));
		}
		cout<<st.top()<<endl;
	}
return 0;
}

