#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n;
int a[1000];
int x;
void in(){
	cout<<"Buoc "<<x<<": ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sx(int n, int a[]){
	int i=0;
	x=1;
	int vt=i+1;
	while(i<n-1){
		
		for(int j=i+1; j<n; j++){
			int min=0;
			if(a[j]<min){
				min=a[j];
				vt=j;
			}
		}
		cout<<vt<<endl;
		int tmp=a[i];
		a[i]=a[vt];
		a[vt]=tmp;
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

