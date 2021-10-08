#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
bool h[11],c[11], nguoc[22], xuoi[22];
int n,res;
int a[100][100];
int x[11];
void kenzy(int i){
	for(int j=1; j<=n; j++){
		if(!h[j]&&!c[j]&&!nguoc[i+j-1]&&!xuoi[i-j+n]){
			x[i]=j;
			h[j]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=true;
			if(i==n){
				int s=0;
				for(int l=1; l<=8; l++){
					s+=a[l][x[l]];
				}
				res=max(res,s);
			}
			else kenzy(i+1);
			h[j]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=false;
		}
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
int t;
cin>>t;
while(t--){
	for(int i=1; i<=8; i++){
		for(int j=1; j<=8; j++){
			cin>>a[i][j];
		}
	}
	res=0;
	h[11]={0};
	c[11]={0};
	nguoc[22]={0};
	xuoi[22]={0};
	x[11]={0};
	n=8;
	kenzy(1);
	cout<<res<<endl;
}

return 0;
}

