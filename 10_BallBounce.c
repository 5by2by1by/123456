#include"stdio.h"
#include"stdlib.h"

int main()
{
float sn=100.0,hn=sn/2;
int n;
for(n=2;n<=10;n++)
{
sn=sn+2*hn;/*第n次落地时共经过的米数*/
hn=hn/2; /*第n次反跳高度*/
}
printf("the total of road is %f\n",sn);
printf("the tenth is %f meter\n",hn);
system("pause");
return 0;
} 
/*int main()
{
    int height = 100,cnt = 0,sum = 100;
    do{
        height = height/2;
        sum = sum +2*height;
        cnt++;
    }while(cnt == 10);
    printf("through：%d m\r\n",sum);
    printf("10th:%d",height);
    system("pause");
    return 0;
}*/