#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,c[50],a[50],stop=0,s;
void sinh(int k){
	int i=k;
	while(c[i]==n-k+i&&i>0) i--;
	if(i==0) stop=1;
	else{
		c[i]++;
		for(int j=i+1; j<=k; j++) c[j]=c[j-1]+1;
	}
}
void kenzy(){
	cin>>n>>s;
	int check=0;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++){
		stop=0;
		for(int j=1; j<=i; j++){
			c[j]=j;
		}
		while(stop==0){
			int tong=0;
			for(int j=1; j<=i; j++) tong+=a[c[j]];
			if(tong==s){
				cout<<i;
				check=1;
				return;
			}
			sinh(i);
		}
	}
	if(check==0) cout<<-1;
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

