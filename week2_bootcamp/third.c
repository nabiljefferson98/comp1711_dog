#include<stdio.h>
//stdio maksud standard I/O dan H maksud Header

int main() {
// main nama special utk main function dan int tu apa jenis nk return value

    double a;
    
    printf("insert a number: ");
    scanf("%f", &a);
    /*
         scanf adalah terima input dr user. 
    */ 

    printf("a = %f\n", &a);
    
    return 0;

    //wajib compile dulu seblm run coding = gcc nama file.c -o nama file
}