#include<stdio.h>
//stdio maksud standard I/O dan H maksud Header

int main() {
// main nama special utk main function dan int tu apa jenis nk return value

    int a,b;
    a = 10;
    b = 20;
    /*
         int adalah datatype dan "a" tu nama tempat utk letak data/memory
         blh buat int = a; atau int a; a = 10;
    */ 

    printf("a = %d, b = %d\n", a,b);
    /*
        blh guna printf("a = "+a+"\n");
        printf maksud print format dan \ special character dan n maksud new line
        % maksud bagitau program utk prepare dptkan variable dan d tu assigned dan jika silap assign akan generate output lain
    */
    
    return 0;

    //wajib compile dulu seblm run coding = gcc nama file.c -o nama file
}