#include<stdio.h>
int main(){
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
	for(int x=0;x<n;x++){
		for(int i=0;i<n;i++){
			printf("%5d",a[x][i]);
			}
		printf("\n\n\n");
		}
	return 0;
}
