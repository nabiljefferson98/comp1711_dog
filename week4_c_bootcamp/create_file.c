#include <stdio.h>

int main()
{
    char filename[] = "./data.txt"; 
    fopen(filename, " ");        
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("File I/O"); //perror means print error message
        return 1;
    }
    printf("file is %ld\n", file); 
    
    fclose(file);
    return 0;
}


/*
    int main()
{
    char filename[] = "data.txt"; // ./ is giving a path
    fopen(filename, " ");        //f is file, meaning open file. star * is a pointer.
    FILE *file = fopen(filename, "w"); //*file pass the number that linked to that file
    fprintf(file, "hello world"); //first f is file & last f is format
    fclose(file);
    return 0;
}

*/


/*
int main () {
    char* filename = "data.txt";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fclose(file);
    return 0;

*/