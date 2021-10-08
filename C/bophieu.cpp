#include<stdio.h>
#include<string.h>

int main(){
//code here tml
	char a[80];
	for(int j=1;j<1000;j++){
	
		gets(a);
		if(a[0]=='#') break;
		else{
			int demY=0;
			int demN=0;
			int demP=0;
			int demA=0;
			int lena=strlen(a);
			for(int i=0; i<lena; i++){
				if(a[i]=='Y') demY++;
				if(a[i]=='N') demN++;
				if(a[i]=='P') demP++;
				if(a[i]=='A') demA++;
			}
			if((float)demA>=(float)lena/2){
				printf("need quorum\n");
			}
			else {
			if(demY>demN) printf("yes\n");
			else if(demY<demN) printf("no\n");
			else printf("tie\n");
			}
		}
		
	}

return 0;
}

