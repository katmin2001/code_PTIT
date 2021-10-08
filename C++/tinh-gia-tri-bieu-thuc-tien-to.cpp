#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	string s;
	cin>>s;
	stack <long long> st;
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
			ll a=st.top(); st.pop();
			ll b=st.top(); st.pop();
			ll res;
			if(s[i]=='+') res=a+b;
			else if(s[i]=='-') res=a-b;
			else if(s[i]=='*') res=a*b;
			else if(s[i]=='/') res=a/b;
			else if(s[i]=='%') res=a%b;
			else if(s[i]=='^'){
				for(int i=0; i<b-1; i++){
					res*=a;
				}
			}
			st.push(res);
		}
		else st.push((ll)(s[i]-'0'));
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

