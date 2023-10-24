#include <stdio.h>

/*

    int main()
{
    char filename[] = "challenge.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("File I/O missing");
        return 1;
    }

    int buffer_size = 100; // buffer always -1 because it reserve for string
    char buffer [buffer_size];
    int count = 0;
    while(fgets(buffer, buffer_size, file))
    {
        printf("%s", buffer);
        count++;
    }
    
    printf(" the loop was executed %d times \n");

    fclose(file);
    return 0;
}

*/


/*

    int main()
{
    char filename[] = "mean_numbers.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("File I/O missing");
        return 1;
    }

    int mean_num;
    for (i = 1; i <= max_numbers; i++)
    {
        fprintf(file,"%d\n", i * i );
    }

    fclose(file);
    return 0;
}

*/

/*

int main()
{
    char filename[] = "mean_numbers.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("File I/O missing");
        return 1;
    }

    int max_numbers = 10, i;
    for (i = 1; i <= max_numbers; i++)
    {
        fprintf(file,"%d\n", i * i );
    }

    fclose(file);
    return 0;
}

*/