#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int a[20];
int n;
void in(){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
//	for(int i=n; i>0; i--){
//		cout<<a[i];
//	}
	cout<<endl;
}
long Check(int *a,int m){
	int i=0,j=m-1;
	while(i<j){
		if(a[i]==a[j]){
			i++; j--;
		}
		else return 0;
	}
	return 1;
}
void Try(int m){
	if(m==n){
		if(Check(a,n)==1){
			in();
		}
		
	}
	else{
		for(int i=0; i<=1; i++){
			a[m]=i;
			Try(m+1);
		}
	}
	
}
int main(){
//code here tml
	cin>>n;
//	if(n%2==0) n/=2;
//	else n=n/2+1;
	Try(0);
return 0;
}

