#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int a[10]={1,2,5,10,20,50,100,200,500,1000};
	int n;
	cin>>n;
	int t;
	int dem=0;
	while(n>0){
		for(int i=9; i>=0; i--){
			if(n>=a[i]){
				n-=a[i];
				dem++;
				break;
			}
		}
	}
	cout<<dem<<endl;
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

