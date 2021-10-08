#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	deque <int> dq;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSHFRONT"){
			int n; cin>>n;
			dq.push_front(n);
		} 
		else if(s=="PRINTFRONT"){
			if(dq.size()>0) cout<<dq.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="POPFRONT"&&dq.size()>0) dq.pop_front();
		else if(s=="PUSHBACK"){
			int n; cin>>n;
			dq.push_back(n);
		}
		else if(s=="PRINTBACK"){
			if(dq.size()>0) cout<<dq.back()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="POPBACK"&&dq.size()>0) dq.pop_back();
		
	}
return 0;
}

