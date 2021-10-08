#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int res4=1e5,res7=1e5;
		int d4,d7;
		for(int i=n; i>=0; i--){
			if(n>=4*i&&(n-4*i)%7==0){
				d4=i;
				d7=(n-4*i)/7;
				if(res4+res7>d4+d7){
					res4=d4;
					res7=d7;
				}
				else if(res4+res7==d4+d7){
					if(res4<d4){
						res4=d4;
						res7=d7;
					}
				}
			}
		}
		if(res4*4+res7*7==n){
			for(int i=1; i<=res4; i++) cout<<"4";
			for(int i=1; i<=res7; i++) cout<<"7";
		}
		else cout<<-1;
		cout<<endl;
	}
return 0;
}

