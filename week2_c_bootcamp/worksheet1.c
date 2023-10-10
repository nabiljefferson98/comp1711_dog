#include<stdio.h>
// worksheet1
int main() {

    float length, wide;
    printf("calculate rectangle area \nEnter the length:");
    scanf("%f", &length);
    printf("Enter the wide:");
    scanf("%f", &wide);
    printf("the rectangle area is %f\n", length*wide);

    return 0;
}