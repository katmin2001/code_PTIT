#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	string s;
	cin>>s;
	stack <string> st;
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
			string s1=st.top(); st.pop();
			string s2=st.top(); st.pop();
			string res="("+s1+s[i]+s2+")";
			st.push(res);
		}
		else st.push(string(1,s[i]));
	}
	cout<<st.top();
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

