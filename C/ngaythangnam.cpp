#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,day;
	scanf("%d%d%d",&a,&b,&c);
	if(b==1|b==3|b==5|b==7|b==8|b==10|b==12){
		day=31;}
	else if(b==4|b==6|b==9|b==11){
		day=30;}
	else {
		if(c%400==0||(c%100!=0 && c%4==0)){
			day=29;}
		else {day=28;}
		}
	int ng=a,t=b,nam=c;
	
	//ngayhomtruoc
	if(a==1){
		if(b==1){
			b=12;
			a=31;
			--c;
		} else  if(b==3&&c%100!=0&&c%4==0)
			{
				--b;
				a=29;
			}	
		else  if(b==3&&(c%400!=0||(c%100==0 && c%4!=0)))
			{
				--b;
				a=28;
			}	
		else{
		
			--b;
			a=day;	
		}	
	} else a-=1;
	printf("%d\t%d\t%d\t\n",a,b,c);	
	a=ng,b=t,c=nam;
	//ngayhomsau
	if(a==day){
		a=1;
		if(b==12){
			b=1;
			c+=1;
		} else b+=1;
	} else a+=1;
	printf("%d\t%d\t%d\t\n",a,b,c);
}	
