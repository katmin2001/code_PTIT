#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void kenzy(){
	int n;
	cin>>n;
	int check=0;
	for(int i=2; i<n; i++){
		if(nt(i)&&nt(n-i)){
			cout<<i<<" "<<n-i;
			check=1;
			break;
		}
	}
	if(check==0) cout<<-1;
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

