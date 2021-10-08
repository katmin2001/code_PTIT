#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
bool h[11],c[11], nguoc[22], xuoi[22];
int n,res;
void kenzy(int i){
	for(int j=1; j<=n; j++){
		if(!h[j]&&!c[j]&&!nguoc[i+j-1]&&!xuoi[i-j+n]){
			h[j]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=true;
			if(i==n) res++;
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
	res=0;
	h[11]={0};
	c[11]={0};
	nguoc[22]={0};
	xuoi[22]={0};
	cin>>n;
	kenzy(1);
	cout<<res<<endl;
}

return 0;
}

