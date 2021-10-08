#include<stdio.h>
#include<math.h>
int main(){
	
	int n;
	scanf("%d",&n);
	for(int i=1; i <= n; i++){
		int a,b;
		scanf("%d%d",&a,&b);
			int count=0;
		for(int j=a; j <=b; j++){
			int dem=0;
			for(int x=2; x<=sqrt(j) ; x++){
				if(j%x==0 && j>=2){dem++;}}
		
			if(dem==0 && j>1){count++;}
		
				
		}printf("%d\n",count);
	}
return 0;
}
				
				

