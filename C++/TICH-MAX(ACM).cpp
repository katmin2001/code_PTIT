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
	sort(a,a+n);
	ll a1=a[n-1]*a[n-2]*a[n-3];
	ll a2=a[n-1]*a[n-2];
	ll a3=a[0]*a[1]*a[2];
	ll a4=a[0]*a[1];
	ll a5=a4*a[n-1];
	int b[5];
	b[0]=a1;
	b[1]=a2;
	b[2]=a3;
	b[3]=a4;
	b[4]=a5;
	sort(b,b+5);
//	for(int i=0; i<5; i++) cout<<b[i]<<" ";
	
	cout<<b[4];
}
int main(){
//code here tml

		kenzy();
		cout<<endl;
return 0;
}

