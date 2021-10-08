#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n;
int a[1000];
int x;
void swap(int a, int b){
	int tmp=a;
	a=b;
	b=tmp;
}
void in(){
	cout<<"Buoc "<<x<<": ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sx(int n, int a[]){
	int i=0;
	x=0;
	bool haveswap=false;
	while(i<n-1){
		haveswap=false;
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
				haveswap=true;
			}
		}
		if(haveswap==false) break;
		in();
		x++;
		i++;
	}
	
}
int main(){
//code here tml
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	sx(n,a);
return 0;
}
