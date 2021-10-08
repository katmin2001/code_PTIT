#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		bool ok;
		stack <char> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]==')'){
				ok=true;
				char top=st.top(); st.pop();
				while(top!='('){
					if(top=='+'||top=='-'||top=='*'||top=='/') ok=false;
					top=st.top(); st.pop();
				}
				if(ok==true) break;
			}
			else st.push(s[i]);
		}
		if(ok==true) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
return 0;
}

