#include "utilities.h"
// 
/*  
    h is a header file, but in this case, its a file to put a code
    utilities 
*/

int main()
{
    // array of daily readings
    //reading daily_readings[100];
    reading dataArray[100];

    char line[buffer_size];
    char filename[buffer_size];
    

    // get filename from the user
    printf("Please enter the name of the data file: ");

    // these lines read in a line from the stdin (where the user types)
    // and then takes the actual string out of it
    // this removes any spaces or newlines.
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    // call a function and it returns a FILE*
    FILE* file = open_file(filename, "r");
    if (!file)
    {
        printf("Error: File could not be opened\n");
        return 1;
    }
    // and uses it in here, the read_file
    int data_array_length = read_file(file, dataArray);
    // close the file 
    fclose(file);

    char choice;

    while (1)
    {

        printf("A: View all your blood iron levels\n");                       // BRONZE
        printf("B: View your average blood iron level\n");                    // BRONZE
        printf("C: View your lowest blood iron level\n");                     // SILVER
        printf("D: View your highest blood iron level\n");                    // SILVER
        printf("E: View the blood iron levels for a specific month\n");       // SILVER/GOLD
        printf("F: See some additional statistics about your iron levels\n"); // GOLD - see readme.md
        printf("G: Generate a graph of your iron levels\n");                  // GOLD/PLATINUM - see readme.md
        printf("Q: Exit the program\n");

        // get the next character typed in and store in the 'choice'
        choice = getchar(); // it get 1 character as a choice

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');


        // switch statement to control the menu.
        switch (choice)
        {
        // this allows for either capital or lower case
        case 'A':
        case 'a':
            return 0;
            break;

        case 'B':
        case 'b': 
            return 0;
            break;

        case 'C':
        case 'c':
            return 0;
            break;

        case 'D':
        case 'd':
            return 0;
            break;

        case 'E':
        case 'e':
            return 0;
            break;

        case 'F':
        case 'f':
            return 0;
            break;

        case 'G':
        case 'g':
            return 0;
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}


/*
    It's ok to write code longer, the compiler will optimised any unnecessary line of codes.
    Avoid to put lot's of stuff in main, better to do fewer line in there, just create functions or smaller chunks of modules.
    It's fine to write functions with 5-6 lines, meaning it's should work less.
    but the calling functions is expensive, if worried, the compiler will optimised for us

*/