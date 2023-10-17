#include <stdio.h>

int main (){

int mark;
printf("input mark: ");
scanf("%d", &mark);

if(mark >= 0)
{
    if (mark >= 40 && mark <= 100)
    {
        printf("%d is a pass\n", mark);
    }

    else if (mark >= 0 && mark < 40)
    {
      printf("%d is a fail\n", mark);
    }
    
    else
    {
        printf(" u failed\n");
    }
    
}

else
{
    printf("mark is not valid\n");
}

return 0;
}