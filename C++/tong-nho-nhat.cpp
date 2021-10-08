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
	int k=n;
	sort(a,a+n);
	ll min1=0, min2=0;
	if(n%2==1) n-=1;
	for(int i=0; i<n; i++){
		if(i%2==0) min1=min1*10+a[i];
		else min2=min2*10+a[i];
	}
	if(k%2==1){
		if(min1>=min2) min2=min2*10+a[k-1];
		else min1=min1*10+a[k-1];
	}
	cout<<min1+min2;
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

