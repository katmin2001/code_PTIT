#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,x;
	cin>>n>>x;
	ll a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	if(x<a[0]) cout<<-1<<endl;
	else if(x>a[n-1]) cout<<n<<endl;
	else{
		int dem=0;
		for(int i=0; i<n; i++){
			if(a[i]<=x) dem++;
			else break;
		}
		cout<<dem<<endl;
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

