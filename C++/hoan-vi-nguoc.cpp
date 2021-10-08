#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n,t;
	int x[10];
	 
	cin>>t;
	
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++){
			x[i]=n-i+1;
			cout<<x[i]; 
		} 
		cout<<" ";
		 
		for(int i=n; i>1; i--){
			if(x[i]<x[i-1]){
				int j=i-1;
				int k=i;
				int max=x[k];
				for(int h=k; h<=n; h++){
					if(x[h]>max && x[h]<x[j]){
						max=x[h];
						k=h; 
					} 
				} 
				
				swap(x[j],x[k]);
				 
				int l=n; 
				for(int h=i; h<=l; h++){
					swap(x[h],x[l]); 
					l--; 
				}  
				for(int h=1; h<=n; h++){
					cout<<x[h]; 
				} 
				
				i=n+1;
				cout<<" "; 
			} 
		} 
		cout<<endl; 
	} 
	return 0; 
} 
