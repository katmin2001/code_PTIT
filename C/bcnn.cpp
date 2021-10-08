#include<stdio.h>
#include<string.h>
#define ll long long
ll ucln(ll a,ll b){
	if(!b) return a;
	return ucln(b,a%b);
	}

int main(){
//code here tml
	int n;
	scanf("%d",&n);
	ll a[10];
	for(int i=0; i<n; i++){
		int k;
		scanf("%d",&k);
		for(int j=0; j<k; j++){
			scanf("%lld",&a[j]);
		}
		for(int j=1; j<k; j++){
			a[j]=a[j]*a[j-1]/ucln(a[j],a[j-1]);
		
			
		}
			printf("%lld\n",a[k-1]);
	}

return 0;
}

