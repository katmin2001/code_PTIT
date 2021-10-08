#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string u="";
		int n=s.size();
		vector <string> v;
		for(int i=0; i<n; i++){
			if(s[i]!=' '){
				u+=s[i];
			}
			else{
				if(u!=" ") v.pb(u);
				u="";
			}
		}
		v.pb(u);
		reverse(v.begin(),v.end());
		for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
		cout<<endl;
	}
return 0;
}

