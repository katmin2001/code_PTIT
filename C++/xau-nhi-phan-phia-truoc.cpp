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
		string s;
		cin>>s;
		int n=s.size();
		int vt=n-1;
		int check=0;
		for(int i=n-1; i>=0; i--){
			if(s[i]=='1'){
				s[i]='0';
				vt=i;
				for(int j=vt+1; j<n; j++) s[j]='1';
				check=1;
				break;
			}
		}
		if(check==0){
			for(int i=0; i<n; i++) cout<<1;
		}
		else cout<<s;
		cout<<endl;
	}
return 0;
}

