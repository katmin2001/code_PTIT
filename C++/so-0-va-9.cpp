#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
string kenzy(int n){
	queue <string> q;
	q.push("9");
	while(q.size()>0){
		string s=q.front(); q.pop();
		ll tmp=0;
		for(int i=0; i<s.size(); i++){
			tmp=tmp*10+(int)(s[i]-'0');
			tmp%=n;
		}
		if(tmp==0) return s;
		q.push(s+"0");
		q.push(s+"9");
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<kenzy(n)<<endl;
	}
return 0;
}

