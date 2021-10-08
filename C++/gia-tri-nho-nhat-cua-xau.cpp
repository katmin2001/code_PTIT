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
		int k;
		cin>>k;
		string s;
		cin>>s;
		int d[26]={0};
		int n=s.size();
		for(int i=0; i<n; i++){
			d[(s[i]-'0')-17]++;
		}
	//	for(int i=0; i<n; i++) cout<<d[i]<<" ";
	//	cout<<endl;
		if(k>=n) cout<<0;
		else{
			while(k>0){
				sort(d,d+26);
				d[25]--;
				k--;
			}
			ll dem=0;
			for(int i=0; i<26; i++) dem+=pow(d[i],2);
			cout<<dem;
		}
		cout<<endl;
	}
return 0;
}

