#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

void kenzy(){
	int k; cin>>k;
	string a;
	cin>>a;
	int b[26]={0};
	int n=a.size();
	int c[n];
	for(int i=0; i<n; i++){
		c[i]=a[i]-'0';
	}
	sort(c,c+n);
	for(int i=0; i<n; i++){
		b[c[i]-c[0]]++;
	}
	ll s=0;
//	for(int i=0; i<26; i++) cout<<b[i]<<" ";
//	cout<<endl;
	if(k>=n) cout<<"0";
	else{
		for(int i=1; i<=k; i++){
			sort(b,b+26);
			b[25]--;
		}
//		for(int i=0; i<26; i++) cout<<b[i]<<" ";
//		cout<<endl;
		sort(b,b+26);
		for(int i=25; i>=0; i--){
			if(b[i]!=0){
				s+=b[i]*b[i];
			}
			else break;
		}
	}
	cout<<s;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

