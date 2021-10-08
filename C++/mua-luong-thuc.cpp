#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,s,m;
	cin>>n>>s>>m;
	if(m*s>n*(s-s/7)) cout<<-1;
	else{
		for(int i=1; i<=s-s/7; i++){
			if(n*i>=s*m){
				cout<<i;
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

