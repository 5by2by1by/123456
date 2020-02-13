#include"stdio.h"
#include"stdlib.h"
int main()
{
    int n,i;
    printf("???????????????\n");
    scanf("%d",&n);
    for(i = 2;i<=n;i++)
    {
        while(n!=i)
        {
            if(n%i == 0){
                printf("%d\t",i);
                n = n/i;
            }else
            {
                break;
            } 
        }
    }
    printf("%d\t",n);
    system("pause");
    return 0;
}