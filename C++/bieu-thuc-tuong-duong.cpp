#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	string s;
	cin>>s;
	stack <int> st;
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
	for(int i=0; i<s.size(); i++){
		if(s[i]!='('&&s[i]!=')'){
			cout<<s[i];
		}
	}
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

