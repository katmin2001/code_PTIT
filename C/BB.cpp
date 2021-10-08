#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int a,b;
		int dem=0,count=0;
		scanf("%d%d",&a,&b);
		for(int j=a;j<=b;j++){
			for(int i=1;i<=b;i++){
				if(j%i==0){
					dem++;
				}
			}
		}
		if(dem==2){
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
