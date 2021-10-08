#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	int n;
	scanf("%d",&n);
	int A[100][100];
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			scanf("%d",&A[i][j]);
			}
		}
	int C[100][100];	
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<n;l++){
				C[i][j]+=A[i][l]*A[l][j];
			}
		}
	}
	int D[100][100];	
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<n;l++){
				D[i][j]+=C[i][l]*A[l][j];
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			printf("%d ",D[i][j]);
			}
		printf("\n");
		}

return 0;
}

