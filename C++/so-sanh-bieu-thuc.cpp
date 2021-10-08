#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	string s,s1;
	cin>>s>>s1;
	stack <int> st;
	stack <int> st1;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='(') st.push(i);
		else if(s[i]==')'){
			if(st.size()>0){
				int top=st.top(); st.pop();
				if(top==0) continue;
				else if(s[top-1]=='+') continue;
				else if(s[top-1]=='-'){
					for(int j=top; j<=i; j++){
						if(s[j]=='+') s[j]='-';
						else if(s[j]=='-') s[j]='+';
					}
				}
			}
		}
	}
	for(int i=0; i<s1.size(); i++){
		if(s1[i]=='(') st1.push(i);
		else if(s1[i]==')'){
			if(st1.size()>0){
				int top=st1.top(); st1.pop();
				if(top==0) continue;
				else if(s1[top-1]=='+') continue;
				else if(s1[top-1]=='-'){
					for(int j=top; j<=i; j++){
						if(s1[j]=='+') s1[j]='-';
						else if(s1[j]=='-') s1[j]='+';
					}
				}
			}
		}
	}
	vector <char> dm;
	vector <char> dm1;
	for(int i=0; i<s.size(); i++){
		if(s[i]!='('&&s[i]!=')'){
			dm.pb(s[i]);
		}
	}
	for(int i=0; i<s1.size(); i++){
		if(s1[i]!='('&&s1[i]!=')'){
			dm1.pb(s1[i]);
		}
	}
	bool ok=true;
	for(int i=0; i<dm.size(); i++){
		if(dm[i]!=s1[i]){
			ok=false;
			break;
		}
	}
	if(ok==true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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
