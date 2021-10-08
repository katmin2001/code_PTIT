#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int p=1;p<=t;p++){
	int a[20][20],i,j,gt,d,hang,cot,n;
	scanf("%d",&n);
	d=0;
	gt=1;
	hang=n-1;
	cot=n-1;
	while(d<=n/2){
		for(i=d;i<=cot;i++){
			a[d][i]=gt++;
			}
		for(i=d+1;i<=hang;i++){
			a[i][cot]=gt++;
			}
		for(i=cot-1;i>=d;i--){
			a[hang][i]=gt++;
			}
		for(i=hang-1;i>d;i--){
			a[i][d]=gt++;
			}
		d++;
		cot--;
		hang--;
		}
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",a[x-1][y-1]);
	}
return 0;
}
