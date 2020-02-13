/*Solution__ 1:*/
#include"stdio.h"
#include<math.h>
#include"stdlib.h"
#define Epsilon 1.0E-6 /*控制解的精度*/
int main()
{
    float a,x0,x1;
    printf("请输入要求的数:");
    scanf("%f",&a);
    x0=a/2;
    x1=(x0+a/x0)/2;
    while(fabs(x1-x0)>=Epsilon)
    {
        x0=x1;
        x1=(x0+a/x0)/2;
    }
    printf("%d的平方根：%f.5\n",a,x1);
    system("pause");
    return 0;
}

/*Solution__ 2:*/;
/*#define Epsilon 1.0E-6 /*控制解的精度*/ 
/*#include <stdio.h>
#include <math.h> 
int main() 
{
    float num,pre,this; 
do 
{ 
scanf("%f",&num);/*输入要求平方根的数*/ 
/*}while(num<0); 
    if (num==0) 
    printf("the root is 0"); 
    else {
    this=1; 
do
{ 
    pre=this;
    this=(pre+num/pre)/2; 
}while(fabs(pre-this)>Epsilon);/*用解的精度，控制循环次数*/ 
/*}*/
/*printf("the root is %f",this); 
system("pause");
return 0;
} */