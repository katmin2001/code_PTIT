#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int minn=1e6+7;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(abs(a[i]+a[j])<abs(minn)) minn=a[i]+a[j];
		}
	}
	cout<<minn<<endl;
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

