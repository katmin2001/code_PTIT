#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int dem[n];
	dem[n-1]=-1;
	for(int i=n-2; i>=0; i--){
		int tmp=-1;
		for(int j=i+1; j<n; j++){
			if(a[j]>a[i]){
				tmp=a[j];
				break;
			}
		}
		dem[i]=tmp;
	}
	for(int i=0; i<n; i++){
		cout<<dem[i]<<" ";
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

