#include <stdio.h>

int main (){

float temperature;
printf(" what's the temperature today? ");
scanf("%f", &temperature);

if (temperature > 20){
    printf("no need for jacket.\n");
    printf("wear jumper.");
}

else if(temperature > 10){

printf("wear light jacket.\n");

}

else{

    printf("wear heavy jacket.\n");
}

return 0;

}