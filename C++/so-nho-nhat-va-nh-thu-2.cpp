#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	if(a[0]==a[n-1]) cout<<-1;
	else{
		cout<<a[0]<<" ";
		for(int i=1; i<n; i++){
			if(a[i]!=a[0]){
				cout<<a[i];
				break;
			}
		}
	}	
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

