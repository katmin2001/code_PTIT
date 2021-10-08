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
		int n,val=0;
		cin>>n;
		queue <int> q;
		while(n--){
			int x;
			cin>>x;
			if(x==1) cout<<q.size()<<endl;
			else if(x==2){
				if(q.size()>0) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
			else if(x==3){
				int y;
				cin>>y;
				q.push(y);
			}
			else if(x==4&&q.size()>0) q.pop();
			else if(x==5){
				if(q.size()>0) cout<<q.front()<<endl;
				else cout<<-1<<endl;
			} 
			else if(x==6){
				if(q.size()>0) cout<<q.back()<<endl;
				else cout<<-1<<endl;
			} 
			val=x;
		}
		if(val==3||val==4) cout<<endl;
	}
return 0;
}

