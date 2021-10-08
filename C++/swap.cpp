#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll n;
void kenzy(){
	long long  dem = 0, mang = 1;
	cin>>n;
	long long a[n + 1][n + 1], b[n + 1][n + 1];
	string s[n + 1];
	for(int i = 1; i <= n; i++)
	{
		a[0][i] = 1;
		cin>>s[i];
		for(int j = 0; j < s[i].length(); j++){
			a[i][j+1] = s[i][j] - '0';
			b[i][j+1] = (a[i][j+1] == 1)? 0 : 1;
		} 
	} 
	for(int i = n; i >= 1; i--){
		for(int j = n; j >= 1; j--){
			if(a[0][j] % 2 == 1 && a[i][j] == 1){
				//cout<<"A"<< i<<" "<<j<<endl;
				dem++;
				for(int t = 1; t <= j; t++)
				a[0][t] += 1;
				//cout<<i<<" "<<j<<endl;
			}
			else
			if(a[0][j] % 2 == 0 && b[i][j] == 1){
				//cout<<"B"<< i<<" "<<j<<endl;
				dem++;
				for(int t = 1; t <= j; t++)
				a[0][t] += 1;
				//cout<<i<<" "<<j<<endl;
			}
			//for(int i = 1; i <= n; i++) cout<<a[0][i]<<" "; cout<<endl;
		}
		
		
	}
	cout<<dem;
}
int main(){
	int t;
	t = 1;
	while(t--){
		kenzy();
		cout<<endl;
	}
}

