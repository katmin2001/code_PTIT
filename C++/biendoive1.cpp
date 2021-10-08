#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy 	v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		while(n>0){
			if(n%3==0){
				while(n%3==0){
					n/=3;
					dem++;
				}
			}
			else if(n%2==0){
				while(n%2==0){
					n/=2;
					dem++;
				}
			}
			else{
				n--;
				dem++;
			}
			if(n==1){
				break;
			}
		}
		cout<<dem<<endl;
	}
return 0;
}

