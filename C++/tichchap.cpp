#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	int h[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>h[i][j];
		}
	}
	ll s=0;
	for(int i=0; i<n-2; i++){
		for(int j=0; j<m-2; j++){
			int c=0;
			for(int x=i; x<i+3; x++){
				int d=0;
				for(int y=j; y<j+3; y++){
					s+=a[x][y]*h[c][d];
					d++;
				}
				c++;
			}
		}
	}
	cout<<s<<endl;
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

