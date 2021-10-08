#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,k;
	cin>>n>>k;
	int a[k+1];
	for(int i=1; i<=k; i++){
		cin>>a[i];
	}
	int check=0;
	for(int i=k; i>0; i--){
		if(a[i]<n-k+i){
			a[i]++;
			for(int j=i+1; j<=k; j++) a[j]=a[i]-i+j;
			check=1;
			break;
			
		}
	}
	if(check==0){
		for(int i=1; i<=k; i++) cout<<i<<" ";
	}
	else{
		for(int i=1; i<=k; i++) cout<<a[i]<<" ";
	}
	cout<<endl;
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

