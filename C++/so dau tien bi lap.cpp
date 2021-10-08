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
		int a[n];
//		for(int i=0; i<n; i++){
//			a[1][i]=1;
//		}
		int x;
		
		for(int i=0; i<n; i++){
			cin>>a[i];
		} 
		int check=1;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n-1; j++){
				if(a[j]==a[i]){
					cout<<a[j]<<endl;
					check=0;
					break;
				}
			}
			if(check==0) break;
		}
//		for(int i=0; i<n; i++){
//			if(a[1][i]>1){
//				cout<<a[0][i]<<endl;
//				check=0;
//				break;
//			} 
//		}
		if(check==1) cout<<"NO"<<endl;
	}
return 0;
}

