#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int t;
	cin>>t;
	string s;
	int n;
	stack <int> st;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			cin>>n;
			st.push(n);
		}
		else if(s=="POP"&&st.size()>0){
			st.pop();
		}
		else if(s=="PRINT"){
			if(st.size()==0){
				cout<<"NONE"<<endl;
			} 
			else cout<<st.top()<<endl;

		}
	}
return 0;
}

