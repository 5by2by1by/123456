#include"stdio.h"
#include"stdlib.h"
/*int main()
{
    int i,org,cnt;
    printf("put two numbers:");
    scanf("%d %d",&org,&cnt);
    while(i<=cnt)
    {
        
    }
}*/
int main()
{
int a,n,count=1;
long int sn=0,tn=0;
printf("please input a and n\n");
scanf("%d,%d",&a,&n);
while(count<=n)
{
tn=tn+a;
sn=sn+tn;
a=a*10;
++count;
}
printf("a+aa+...=%ld\n",sn);
system("pause");
} 