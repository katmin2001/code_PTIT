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
		string s; cin>>s;
		stack <char> st;
		int dem=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(') st.push(s[i]);
			else if(s[i]==')'){
				if(st.size()){
					st.pop();
					dem++;
				}
			}
		}
		cout<<dem*2<<endl;
	}
return 0;
}

