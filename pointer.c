#include <stdio.h>

int main(){

    int n = 1000;
    int array[n];
    int i;


    for (i = 0; i < n; i++){
        array[i] = 10 * i + i;
    }


    for (i=0; i<n; i++){
        printf("array [%d] = %d\n", i, array[i]);
    }

    return 0;

}

/*
    int ptr [2] = {0x42, 0x19};
    printf("%0x"), ptr;
    printf("%0x"), ptr+1;
    printf("%0x"), *ptr;
    printf("%0x"), *(ptr+1);
*/