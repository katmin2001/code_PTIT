#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
	 	int n;
	 	cin>>n;
	 	int a[n];
	 	int s2=0;
	 	for(int i=0; i<n; i++){
	 		cin>>a[i];
	 		if(i>0) s2+=a[i];
		} 
		int s1=0; 
//		cout<<s2<<endl;
//	 	int l=0,right=1;
		int i=1;
		int check=1;
	 	while(s1!=s2&&i<n){
	 		s1+=a[i-1];
	 		s2-=a[i];
	 		i++;
//	 		if(i==n-1){
//	 			cout<<"-1";
//	 			check=0;
//	 			break;
//			}
		}
		if(i==n) cout<<"-1";
		else
//		cout<<s1<<" "<<s2<<endl;
		cout<<i;
		cout<<endl;
	}
return 0;
}

