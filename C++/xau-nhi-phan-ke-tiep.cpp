#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	string a;
	cin>>a;
	int n=a.length();
	int check=0;
	for(int i=n-1; i>=0; i--){
		if(a[i]=='0'){
			a[i]='1';
			for(int j=i+1; j<n; j++){
				a[j]='0';
			}
			check=1;
			break;
		}
	}
	if(check==0){
		for(int i=0; i<n; i++) cout<<"0";
	}
	else cout<<a;
	cout<<endl;
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
	}
return 0;
}

