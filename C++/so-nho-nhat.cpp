#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[1005];
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		a[1005]={0};
		int s,d;
		cin>>s>>d;
		int n=d;
		int check=0;
		if(s>d*9) cout<<-1;
		else{
			while(s>9){
				a[d]=9;
				s-=9;
				d--;
			}
			if(d==1) a[d]=s;
			if(d>1){
				a[1]=1;
				a[d]=s-1;
				for(int i=2; i<d; i++) a[i]=0;
			}
			for(int i=1; i<=n; i++) cout<<a[i];
		}
		cout<<endl;
	}
return 0;
}

