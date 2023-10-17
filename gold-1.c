#include <stdio.h>

int main (){

int option;
printf("------advanced menu system-----\n\n");
printf("   what's your option? : ");
scanf("%d", &option);

switch (option)
{
    case 1:
        printf("you selected banana pie!\n");
        break;

    case 2:
        printf("you selected original pie!\n");
        break;
    
    case 3:
        printf("you selected cinnamon pie!\n");
        break;

    case 4:
        printf("you selected apple pie!\n");
        break;

    case 5:
        printf("you selected ginger pie!\n");
        break;   
    
    default:
        printf("error choice. please try again.\n");
}

printf("\n");
return 0;
}