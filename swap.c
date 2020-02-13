/*#include"stdio.h"
#include"stdlib.h"
int main()
{
    int a = 1;
    int b = 2;
    printf("a = %d, b = %d\r\n",a,b);
    swap(&a,&b);        //指针就是地址，传入的一定要是地址，不然会报错！
    printf("a = %d, b = %d\r\n",a,b);
    system("pause");
    return 0;
}

void swap(int* px,int* py)   //注意复习深拷贝和浅拷贝的区别！！！
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}*/

#include"stdio.h"
#include"stdlib.h"
#define SWAP(x,y,t)  ((t) = (x),(x) = (y),(y) = (t))  //对于任何类型都可用，在C中很适合
int main()
{
    int t,a = 1;
    int b = 10;
    printf("a = %d,b = %d\r\n",a,b);
    SWAP(a,b,t);
    printf("a = %d,b = %d\r\n",a,b);
    system("pause");
    return 0;
}
