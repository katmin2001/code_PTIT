#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int A[100][100];
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			scanf("%d",&A[i][j]);
			}
		}
	int B[100][100];
	for(int i=0; i<m; i++){
		for(int j=0;j<m;j++){
			scanf("%d",&B[i][j]);
			}
		}
	int C[100][100];	
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<n;l++){
				C[i][j]+=A[i][l]*B[l][j];
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			printf("%d ",C[i][j]);
			}
		printf("\n");
		}
	return 0;
}
