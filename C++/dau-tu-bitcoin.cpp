#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int temp = 0,min,max;
		for(int i = 0 ;i <n-1; i++) {
			max = a[i];
			min = INT_MAX;
			for(int j = i+1; j< n; j++) {
				if (a[j]<min) min = a[j];
			}
			if(temp < max - min) temp = max-min;
		}
		cout << temp;
	
	return 0;
}
