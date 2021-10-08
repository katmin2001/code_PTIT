#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int k;
	string s;
	cin>>k>>s;
	for(int i=0; i<s.size(); i++){
		char max=s[s.size()-1];
		int vt=s.size()-1;
		for(int j=s.size()-1; j>i && k>0; j--){
			if(max<s[j]){
				max=s[j];
				vt=j;
			}
		}
		if(max>s[i]&&k>0){
			swap(s[i],s[vt]);
			k--;
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

