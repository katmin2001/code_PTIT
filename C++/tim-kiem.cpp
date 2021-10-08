#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int check=0;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++){
		if(a[i]==k){
			check=1;
			break;
		}
	}
	if(check==1) cout<<1<<endl;
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

