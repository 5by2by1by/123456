#include"stdio.h"
#include"stdlib.h"
int fibonacci(int n)
{
    if(n == 0)  return 0;
    if(n == 1)  return 1;
    if(n >= 2)  {
        return fibonacci(n-1)+fibonacci(n-2);
        }
}

int main()
{
    int a;
    printf("������һ��������");
    scanf("%d",&a);
    printf("��%d�Ľ���ǣ�%d",a,fibonacci(a));
    system("pause");
    return 0;
}




/*
int fibonacci(int n)
{
    if(n == 0)  fibonacci(0) == 0;
    if(n == 1)  fibonacci(1) == 1;
    if(n >= 2)  {
       fibonacci(n) == fibonacci(n-1)+fibonacci(n-2);
        }
}
*/
