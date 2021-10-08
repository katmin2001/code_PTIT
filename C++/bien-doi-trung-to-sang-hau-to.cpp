#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int cf(char c){
	if(c=='^') return 5;
	if(c=='*'||c=='/') return 4;
	if(c=='+'||c=='-') return 3;
	return 2;
}
void kenzy(){
	string s;
	cin>>s;
	string res="";
	stack <char> st;
	for(int i=0; i<s.size(); i++){
		if(s[i]>='A'&&s[i]<='Z') res+=s[i];
		else if(s[i]>='a'&&s[i]<='z') res+=s[i];
		else if(s[i]=='(') st.push(s[i]);
		else if(s[i]==')'){
			while(st.size()&&st.top()!='('){
				res+=st.top();
				st.pop();
			}
			st.pop();
		}
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
			while(st.size()&&cf(st.top())>=cf(s[i])){
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(st.size()){
		if(st.top()!='(') res+=st.top();
		st.pop();
	}
	cout<<res<<endl;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		kenzy();
	}
return 0;
}

