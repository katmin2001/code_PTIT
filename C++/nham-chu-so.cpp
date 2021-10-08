#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int sau(string a){
	int n=a.length();
	for(int i=0; i<n; i++){
		if(a[i]=='5') a[i]='6';
	}
	int x=0;
	for(int i=0; i<n; i++){
		x=10*x+(a[i]-'0');
	}
	return x;
}
int nam(string a){
	int n=a.length();
	for(int i=0; i<n; i++){
		if(a[i]=='6') a[i]='5';
	}
	int x=0;
	for(int i=0; i<n; i++){
		x=10*x+(a[i]-'0');
	}
	return x;
}
void kenzy(){
	string a,b;
	cin>>a>>b;
	cout<<nam(a)+nam(b)<<" "<<sau(a)+sau(b);
}
int main(){
//code here tml
	kenzy();
return 0;
}

