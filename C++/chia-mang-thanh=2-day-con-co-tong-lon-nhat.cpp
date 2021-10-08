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
	sort(a,a+n);
	int sum1=0, sum2=0;
	if(k<=n/2){
		for(int i=0; i<k; i++){
			sum1+=a[i];
		}
		for(int i=k; i<n; i++){
			sum2+=a[i];
		}
	}
	else{
		for(int i=n-k; i<n; i++){
			sum1+=a[i];
		}
		for(int i=0; i<n-k; i++){
			sum2+=a[i];
		}
	}
	cout<<abs(sum1-sum2);
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

