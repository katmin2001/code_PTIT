#include<stdio.h>
int main()
{
	
	int d[20];
	for(int i=0; i<20; i++){
		scanf("%d",&d[i]);}
	for( int j=0; j<20; j++){
		int min=d[j];
		int pos=j,a;
		for(a=j; a<20; a++){
			if(min>d[a]){
				min=d[a];
				pos=a;
			}
		}
		a=d[j];
		d[j]=d[pos];
		d[pos]=a;
	
	}
	for( int j=0; j<10; j++){
		int min=d[j];
		int pos=j,a;
		for(a=j; a<10; a++){
			if(min>d[a]){
				min=d[a];
				pos=a;
			}
		}
		a=d[j];
		d[j]=d[pos];
		d[pos]=a;
		printf("%d ",d[j]);
	}
	printf("\n");
	for( int j=10; j<20; j++){
		int min=d[j];
		int pos=j,a;
		for(a=j; a<20; a++){
			if(min<d[a]){
				min=d[a];
				pos=a;
			}
		}
		a=d[j];
		d[j]=d[pos];
		d[pos]=a;
		printf("%d ",d[j]);
	}
		
return 0;
}
