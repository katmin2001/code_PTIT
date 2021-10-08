#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,k,dem;
int a[10];
bool xet[10];
void dau(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>a[i];
		xet[i]=false;
	}
	sort(a,a+n);
}
void in(){
	cout<<"[";
	int sum=0;
	for(int i=0; i<n; i++){
		if(xet[i]==true){
			sum+=a[i];
			if(sum==k){
				cout<<a[i]<<"]";
			}
			else cout<<a[i]<<" ";
		}
	}
}
bool ok(){
	int sum=0;
	for(int i=0; i<n; i++){
		if(xet[i]==true) sum+=a[i];
	}
	if(sum==k) return true;
	else return false;
}
void sinh(int i){
	if(i>n-1){
		if(ok()){
			in();
			dem++;
		}
		return;
	}
	for(int j=1; j>=0; j--){
		if(j==1) xet[j]=false;
		else xet[j]=true;
		sinh(i+1);
	}
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		dau();
		sinh(0);
		if(dem==0) cout<<-1;
		cout<<endl;
	}
return 0;
}

