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
void kenzy(){

}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		bool ok;
		stack <int> st;
		int n=s.size();
		for(int i=0; i<n; i++){
			if(s[i]==')'){
				ok=true;
				char top=st.top(); st.pop();
				while(top!='('){
					if(top=='+'||top=='-'||top=='*'||top=='/'){
						ok=false;
					}
					top=st.top(); st.pop();
				}
				if(ok==true) break;
			}
			else st.push(s[i]);
		}
		if(ok==true) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
return 0;
}

