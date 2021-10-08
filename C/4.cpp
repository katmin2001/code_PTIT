#include <stdio.h>
#include <math.h>
int KTngto(int n)
{
int i=0;
if (n<2)
return 0;
else {
for (i=2;i<=sqrt(n);i++){
if (n%i==0){
return 0;
}
else
return 1;
}
}
}
main()
{
int n,i;
scanf ("%d",&n);
KTngto(n);
if (KTngto(n)==0)
printf ("No");
else
printf ("Yes");
}
