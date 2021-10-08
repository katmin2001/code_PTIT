#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll luythua(int n, int k){
	if(k==0) return 1;
	ll tmp=luythua(n,k/2);
	if(k%2==0) return tmp*tmp;
	else return n*tmp*tmp;
}
void kenzy(){
	string s1,s2;
	cin>>s1>>s2;
	int n1=s1.size(), n2=s2.size();
	ll x1=0,x2=0;
	for(int i=0; i<n1; i++){
		if(s1[i]=='1'){
			x1+=luythua(2,n1-1-i);
		}
	}
	for(int i=0; i<n2; i++){
		if(s2[i]=='1'){
			x2+=luythua(2,n2-1-i);
		}
	}
	ll tich=x1*x2;
	cout<<tich;
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

