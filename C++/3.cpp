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
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		vector <string> s;
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			a[i]=0;
		}
		int x=pow(2,n)-1;
		int y=x;
		string u="";
		for(int i=0; i<n; i++) u+='6';
		s.pb(u);
		while(x--){
			int vt=0;
			u="";
			for(int i=n-1; i>=0; i--){
				if(a[i]==0){
					a[i]=1;
					vt=i;
					break;
				} 
			}
			for(int i=vt+1; i<n; i++){
				a[i]=0;
			}
			for(int i=0; i<n; i++){
				if(a[i]==0) u+='6';
				else u+='8';
			}
			s.pb(u);
		}
		cout<<y+1<<endl;
		for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";
		cout<<endl;
	}
return 0;
}

