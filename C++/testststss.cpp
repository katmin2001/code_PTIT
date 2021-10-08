#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	for(int i=0; i<100; i++) a[i]='-1';
	fgets(a, sizeof(a), stdin);
	
	int demkt = 0,demso = 0,demk = 0;
	for(int i = 0; i < 100; i++){
		if(((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))&&a[i]!='-1'){
			demkt++;
		}
		else if(a[i] >= '0' && a[i] <= '9'&&a[i]!='-1'){
			demso++;
		}
		else if(a[i]!='-1') demk++;
	}
	printf("%d %d %d", demkt, demso, demk);
return 0;
}
