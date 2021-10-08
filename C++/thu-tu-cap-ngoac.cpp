#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack <int> st;
		vector<int> a;
		int x=1;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='('){
				st.push(x);
				cout<<st.top()<<" ";
				x++;
			}
			else if(s[i]==')'){
				if(s.size()){
					cout<<st.top()<<" ";
					st.pop();
				}
			} 
		}
		cout<<endl;
	}
return 0;
}

