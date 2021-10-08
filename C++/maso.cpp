#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,a[12];
string s[12];
bool ok[1004];
void in(){
	for(int i=1; i<=n; i++) cout<<s[i];
	for(int i=1; i<=n; i++) cout<<a[i];
	cout<<endl;
}
void ne(int d){
	for(int i=1; i<=n; i++){
		a[d]=i;
		if(d==n) in();
		else ne(d+1);
	}
}
void next(int m){
	for(int i=65; i<65+n; i++){
		if(ok[i]==true){
			s[m]=i; ok[i]=false;
			if(m==n) ne(1);
			else next(m+1);
			ok[i]=true;
		}
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	cin>>n;
	for(int i=0; i<1004; i++) ok[i]=true;
	next(1);
return 0;
}

