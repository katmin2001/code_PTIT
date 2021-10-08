#include <iostream>
#include <math.h>
using namespace std;
 
int kt(long n){
	if(n<=1)	return 0;
	else{
		for(int i=2; i<=sqrt(n);i++){
			if(n%i==0)	return 0;
		}
	}
	return 1;
}
 
int main(){
	long n;
	cin >> n;
	for(long i=2; i<=sqrt(n); i++){
		if(kt(i)==1){
			if(n%i==0){
				long dem=0;
				while(n%i==0){
					dem++;
					n=n/i;
				}
				cout << i << " " << dem << endl;
			}
		}
	}
	if(n!=1 && kt(n)==1)	cout << n << " 1";
	return 0;
}
