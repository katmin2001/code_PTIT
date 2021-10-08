#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n;i++) cin>>a[i];
	int b[100005]={0};
	for(int i=0; i<n; i++) b[a[i]]++;
	if(b[k]!=0) cout<<b[k]<<endl;
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

