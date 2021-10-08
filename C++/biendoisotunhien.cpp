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
struct dta{
	int val;
	int dem;
};
int kenzy(int n){
	set <int> s;
	s.insert(n);
	queue <dta> q;
	q.push({n,0});
	while(q.size()>0){
		dta tmp=q.front(); q.pop();
		if(tmp.val==1) return tmp.dem;
		if(tmp.val-1==1) return tmp.dem+1;
		if(s.find(tmp.val-1)==s.end()&&tmp.val>0){
			q.push({tmp.val-1,tmp.dem+1});
			s.insert(tmp.val-1);
		}
		for(int i=2; i*i<=tmp.val; i++){
			if(tmp.val%i==0){
				if(s.find(tmp.val/i)==s.end()){
					q.push({tmp.val/i,tmp.dem+1});
					s.insert(tmp.val/i);
				}
			}
		}
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

