#include <bits/stdc++.h>
using namespace std;
int n,k; 
char s[11]; 
void out(){ 
 	for(int i=1 ; i<=n ; i++){ 
	  	cout<<s[i]; 
 	} 
 	cout<<endl; 
} 
int main() { 
 	int t; cin>>t; 
 	while(t--){ 
 		cin>>n>>k; 
 		for(int i=1 ; i<=n ; i++) s[i] = '0'; 
 		int x = n; 
 		int c =0; 
 		while(x){ 
 			if(s[x] == '0'){ 
			  	s[x] = '1'; 
				c++; 
				x = n; 
				if(c == k){ out(); } 
			} 
			else{ 
				c--; 
				s[x] = '0'; 
				x--; 
			} 
		} 
	} 
	return 0; 
}
