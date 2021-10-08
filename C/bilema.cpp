#include<stdio.h>
int main()
{	int n,T;
	scanf("%d",&n);
	scanf("%d",&T);
	int d[n];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);}
	//bian
	int s=0,b=0;
	for(int i=0; i<n; i++){
		if(s<=T){
		
		s=s+d[i];
		b++;
	}
}
	//lema
	int t=0,l=0;
		for(int i=n-1; i>=0; i--){
		if(t<=T){
		
		t=t+d[i];
		l++;
	}
}
	if(b>l){
		printf("bi");
	}
	else if(b<l){
		printf("lema");
	}
	else printf("tie");
return 0;
}
