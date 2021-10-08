#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[10005],k,n;
vector <string> s;
void next(int m){
	if(m>k){
		string u="";
		for(int i=1; i<=k; i++) u+=a[i]+'0';
		s.pb(u);
		u="";
		return;
	}
	for(int i=a[m-1]+1; i<=n-k+m; i++){
		a[m]=i;
		next(m+1);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		next(1);
		int b[k];
		string u="";
		for(int i=0; i<k; i++){
			cin>>b[i];
			u+=b[i]+'0';
		}
		for(int i=0; i<s.size(); i++){
			if(u==s[0]&&i==0){
				for(int j=0; j<k; j++) cout<<s[s.size()-1][j]<<" ";
				cout<<endl;
				break;
			}
			else if(u==s[i]){
				for(int j=0; j<k; j++) cout<<s[i-1][j]<<" ";
				cout<<endl;
				break;
			}

		} 
	}
return 0;
}

