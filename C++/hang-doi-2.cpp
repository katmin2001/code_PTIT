#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	queue <int> q;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int n;
			cin>>n;
			q.push(n);
		}
		else if(s=="PRINTFRONT"){
			if(q.size()>0) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="POP"&&q.size()>0){
			q.pop();
		}
	}
return 0;
}
