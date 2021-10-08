#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

void kenzy(){
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
	sort(d,d+26);
	if(k>=n) cout<<0;
	else{
		for(int i=26; i>=0; i--){
			if(d[i]>1&&k>0){
				while(d[i]>1&&k>0){
					d[i]--;
					k--;
				} 
			}
		}
		int dem=0;
		if(k>0){
			for(int i=0; i<26; i++){
				dem+=d[i];
			}
			cout<<dem-k;
		}
		else{
			for(int i=0; i<26; i++){
				if(d[i]!=0) dem+=pow(d[i],2);
			}
			cout<<dem;
		}
	}
//	for(int i=0; i<n; i++) cout<<d[i]<<" ";
//	cout<<endl;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

