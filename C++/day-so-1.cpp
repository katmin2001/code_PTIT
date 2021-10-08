#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int x=n-1;
	cout<<"[";
	for(int i=0; i<n; i++){
		if(i==n-1) cout<<a[i];
		else cout<<a[i]<<" ";
	} 
	cout<<"]"<<endl;
	for(int i=0; i<n-1; i++){
		cout<<"[";
		for(int j=0; j<x; j++){
			a[j]=a[j]+a[j+1];
			if(j==x-1) cout<<a[j];
			else cout<<a[j]<<" ";
			
		}
		cout<<"]";
		cout<<endl;
		x--;
	}
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

