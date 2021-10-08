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
int k;
struct data{
	int val;
	int dem;
};
int kenzy(int n){
	set <int> s;
	s.insert(n);
	queue <data> q;
	q.push({n,0});
	while(q.size()>0){
		data tmp=q.front(); q.pop();
		if(tmp.val==k) return tmp.dem;
		if(tmp.val*2==k||tmp.val-1==k) return tmp.dem+1;
		if(s.find(tmp.val*2)==s.end()&&tmp.val<k){
			q.push({tmp.val*2,tmp.dem+1});
			s.insert(tmp.val*2);
		}
		if(s.find(tmp.val-1)==s.end()&&tmp.val>0){
			q.push({tmp.val-1,tmp.dem+1});
			s.insert(tmp.val-1);
		}
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n>>k;
		cout<<kenzy(n)<<endl;
	}
return 0;
}

