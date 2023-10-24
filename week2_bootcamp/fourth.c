#include<stdio.h>
//stdio maksud standard I/O dan H maksud Header

int main() {
// main nama special utk main function dan int tu apa jenis nk return value

    int a;
    char name [20];
    printf("insert a name: ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    
    return 0;

    //wajib compile dulu seblm run coding = gcc nama file.c -o nama file
}