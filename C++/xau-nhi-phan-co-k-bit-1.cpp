#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,k;
int a[1000];
void in(){
	for(int i=1; i<=n; i++) cout<<a[i];
	cout<<endl;
}
void kenzy(){
	cin>>n>>k;
	int x=n;
	int c=0;
	for(int i=1; i<=n; i++) a[i]=0;
	while(x){
		if(a[x]==0){
			a[x]=1;
			c++;
			x=n;
			if(c==k) in();
		}
		else{
			c--;
			a[x]=0;
			x--;
		}
	}
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

