#include <stdio.h>

int main (){

int label;
printf("label? : ");
scanf("%d", &label);

switch (label)
{
    case 0:
        printf("0 was selected\n");
        break;

    case 1:
        printf("1 was selected");
        break;
    
    case 2:
        printf("2 was selected");
    
    default:
        printf("error label\n");
}

return 0;
}