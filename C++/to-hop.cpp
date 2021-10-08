#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll m=1e9+7;
ll a[1005][1005];
void tohop(){
	for(int i=0; i<1000; i++){
		for(int j=0; j<=i; j++){
			if(i==j || j==0) a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
			a[i][j]%=m;
		}
	}
}
void kenzy(){
	int n,k;
	cin>>n>>k;
	tohop();
	cout<<a[n][k]<<endl;
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

