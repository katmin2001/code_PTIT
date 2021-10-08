#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll a[100001],b[100001],c[100001];
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int n;
	cin>>n;
	while(n--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;

		for(int i=0; i<n1; i++) cin>>a[i];
		for(int i=0; i<n2; i++) cin>>b[i];
		for(int i=0; i<n3; i++) cin>>c[i];
		int i=0,j=0,k=0;
		bool check=false;
		while(i<n1&&j<n2&&k<n3){
			while(a[i]==b[j]&&k<n3){
				if(b[j]==c[k]){
					check=true;
					cout<<c[k]<<" ";
					i++; j++; k++;
				}
				else if(b[j]<c[k]) j++;
				else k++;
			}
			if(a[i]<b[j]) i++;
			else j++;
		}
		if(check==false) cout<<"NO";
		cout<<endl;
	}
return 0;
}

