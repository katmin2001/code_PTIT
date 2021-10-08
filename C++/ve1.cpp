#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
struct buoc{
	int so;
	int dem;
};
int kenzy(int n){
	set <int> s;
	s.insert(n);
	queue<buoc>q;
	q.push({n,0});
	while(q.size()>0){
		buoc tmp=q.front(); q.pop();
		if(tmp.so==1) return tmp.dem;
		if(tmp.so==2||tmp.so==3) return tmp.dem+1;
		if(tmp.so%2==0&&s.find(tmp.so/2)==s.end()){
			q.push({tmp.so/2,tmp.dem+1});
			s.insert(tmp.so/2);
		}
		if(tmp.so%3==0&&s.find(tmp.so/3)==s.end()){
			q.push({tmp.so/3,tmp.dem+1});
			s.insert(tmp.so/3);
		}
		if(tmp.so-1>0&&s.find(tmp.so-1)==s.end()){
			q.push({tmp.so-1,tmp.dem+1});
			s.insert(tmp.so-1);
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

