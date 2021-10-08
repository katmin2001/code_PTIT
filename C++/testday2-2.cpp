#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int check[100000001][100000001];
int u[100000001][100000001];
int a,b;
int kenzy(int i, int j,int dem){
	if(i>a||j>b||dem<0) return 0;
	if(i==a&&j==b&&dem==0){
		return 1;
	}
	if(u[i+1][j]==1&&i!=a&&check[i+1][j]==false){
		check[i][j]=true;
		kenzy(i+1,j,dem-1);
		check[i][j]=false;
	}
	if(u[i][j+1]==1&&j!=b&&check[i][j+1]==false){
		check[i][j]=true;
		kenzy(i,j+1,dem-1);
		check[i][j]=false;
	} 
	if(u[i-1][j]==1&&i!=1&&check[i-1][j]==false){
		check[i][j]=true;
		kenzy(i-1,j,dem-1);
		check[i][j]=false;
	} 
	if(u[i][j-1]==1&&j!=1&&check[i][j-1]==false){
		check[i][j]=true;
		kenzy(i,j-1,dem-1);
		check[i][j]=false;
	}  
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>a>>b>>N;
		if(kenzy(0,0,N)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}

