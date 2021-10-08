#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	string s;
	int n;
	stack<int> st;
	while(cin>>s){
		if(s=="push"){
			cin>>n;
			st.push(n);
		}
		else if(s=="pop") st.pop();
		else if(s=="show"){
			vector <int> a;
			if(st.size()==0){
				cout<<"empty"<<endl;
				continue;
			}
			while(st.size()>0){
				a.pb(st.top());
				st.pop();
			}
			reverse(a.begin(),a.end());
			for(int i=0; i<a.size(); i++){
				cout<<a[i]<<" ";
				st.push(a[i]);
			}
			cout<<endl;
		}
	}
return 0;
}

