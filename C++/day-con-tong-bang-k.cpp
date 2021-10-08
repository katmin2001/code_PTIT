#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int sum=0;
	for(int i=0; i<n; i++){
		sum=a[i];
		for(int j=i+1; j<n; j++){
			if(sum==k){
				for(int x=i; x<=j; x++){
					cout<<a[x]<<" ";
				}
			}
			if(sum>k) break;
			sum+=a[j];
		}
		
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

