#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[1000][1000];
void kenzy(){
	int n; cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>a[n-1][i];
	}
	int x=n-1;
	for(int i=n-2; i>=0; i--){
		for(int j=0; j<x; j++){
			a[i][j]=a[i+1][j]+a[i+1][j+1];
		}
		x--;
	}
	for(int i=0; i<n; i++){
		cout<<"[";
		for(int j=0; j<n; j++){
			if(a[i][j]!=0){
				if(a[i][j+1]==0) cout<<a[i][j]<<"]";
				else cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
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

