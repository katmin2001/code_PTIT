#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,k;
	cin>>n>>k;
	int a[k+5];
	int d[100]={0};
	for(int i=1; i<=k; i++){
		cin>>a[i];
		d[a[i]]=1;
	}
	int i=k;
	while(i>0&&a[i]==n-k+i) i--;
	if(i<=0) cout<<k;
	else{
		a[i]+=1;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
		for(int j=1; j<=k; j++) d[a[j]]=0;
		int dem=0;
		for(int j=1; j<=40; j++) if(d[j]) dem++;
		cout<<dem;
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

