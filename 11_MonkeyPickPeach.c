#include"stdio.h"
#include"stdlib.h"
int main()
{
    int i,s,n=1;
    for(i=1;i<10;i++)
    {
    s=(n+1)*2;
    n=s;
    }
    printf("第一天共摘了%d个桃\n",s);
    system("pause");
    return 0;
} 
