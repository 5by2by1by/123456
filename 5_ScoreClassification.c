#include"stdio.h"
#include"stdlib.h"
/*int main()
{
int score;
char grade;
printf("please input a score\n");
scanf("%d",&score);
grade=score>=90?'A':score>=60?'B':'C';
printf("%d belongs to %c",score,grade);
system("pause");
return 0;
} */

int main()
{   
    int score;
    printf("ÇëÊäÈë·ÖÊý£º");
    scanf("%d",&score);
    if (score >= 90)
    printf("A\r\n");
    else if(score>=60 && score<=90)
    printf("B\r\n");
    else if(score<60)
    printf("C\r\n");  
    system("pause");
    return 0;
}