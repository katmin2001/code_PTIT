#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	string a;
	cin>>a;
	int n=a.length();
	int d[100]={0};
	int max=0;
	for(int i=0; i<n; i ++){
		d[a[i]-'0']++;
		if(d[a[i]-'0']>=max) max=d[a[i]-'0'];
	}
	int x;
	if(n%2==1) x=n/2+1;
	else x=n/2;
	if(max<=x) cout<<1<<endl;
	else cout<<-1<<endl;
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

