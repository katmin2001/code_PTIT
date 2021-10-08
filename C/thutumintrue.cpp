#include<stdio.h>
int main()
{int n;
	scanf("%d",&n);
	int d[n];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);}
	
	for (int i = 0; i < n; i++){
		for (int j = i+1; j<n; j++){
			if (d[j] < d[i]){
				int tmp = d[i];
				d[i] = d[j];
				d[j] = tmp;
			}
		}
	}
	
	int j = 0;
	int i = n-1;
	while(j <= i){
		if(j == i)	
		{
			printf("%d", d[i]);
			break;
		}
		printf("%d %d ", d[j], d[i]);
		i--;
		j++;
	}
return 0;
}
