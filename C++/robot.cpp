#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//code here tml
	int n;
	cin>>n;
	string a;
	cin>>a;
	int x=0,y=0;
	int check=4;
	for(int i=0; i<n; i++){
		if(check==4){
			if(a[i]=='R'){
				x++;
				check=1;
			}
			if(a[i]=='L'){
				x--;
				check=3;
			}
			if(a[i]=='G'){
				y++;
				check=4;
			}
			if(a[i]=='B'){
				y--;
				check=2;
			}
		}
		else if(check==1){
			if(a[i]=='R'){
				y--;
				check=2;
			}
			if(a[i]=='L'){
				y++;
				check=4;
			}
			if(a[i]=='G'){
				x++;
				check=1;
			}
			if(a[i]=='B'){
				x--;
				check=3;
			}
		}
		else if(check==2){
			if(a[i]=='R'){
				x--;
				check=3;
			}
			if(a[i]=='L'){
				x++;
				check=1;
			}
			if(a[i]=='G'){
				y--;
				check=2;
			}
			if(a[i]=='B'){
				y++;
				check=4;
			}
		}
		else if(check==3){
			if(a[i]=='R'){
				y++;
				check=4;
			}
			if(a[i]=='L'){
				y--;
				check=2;
			}
			if(a[i]=='G'){
				x--;
				check=3;
			}
			if(a[i]=='B'){
				x++;
				check=1;
			}
		}
	}
	cout<<x<<" "<<y;
return 0;
}

