#include <stdio.h>
#include <stdlib.h>
int main()
{
    double x,y,i;
    int a,b,sum;
    int cnt=1;
    x = 2.0;
    do{
        i = 2.0;
        do{
            y = x / i;
            a = (int)y;
            if(y != a)
            {
                if(i == x - 1)
                {
                    b = (int)x;
                    printf("第%d个质数是：%d\r\n",cnt,b);
                    sum = cnt++;
                }
            }
            i++;
        }while(y != a);
        x++;
    }while(x <= 10000.0);
    printf("总的质数为：%d",sum);
    system("pause");//避免闪退
    return 0;
}