#include"stdio.h"
#include"stdlib.h"
int main()
{
    int a;
    int i,j,k;
    for(a = 100; a<= 999; a++)
    {
        i = a/100;
        j =(a/10)%10;
        k = a%10;
        if(i*i*i+j*j*j+k*k*k == i*100+j*10+k)//不能写成i^3+j^3+k^3,因为在C中，^表示异或；
        {printf("水仙花数为：%d\r\n",a);}
    }
    system("pause");
    return 0;
}