#include<stdio.h>
// string name in reverse
int main() {

int a = 2, b = 3;
printf("a = %d, b = %d\n", a, b);

//swap two values

int temp = a;
a = b;
b = temp;

printf("a = %d, b = %d\n", a, b);

return 0;
}