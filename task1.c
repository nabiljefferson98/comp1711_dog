#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here

/*
    Notes:
    Get the output from each data in the file (filename.date)
    Add array array[]
    Determine how many lines / data inside the csv, use for-loop
    Get output how many numbers of record inside the file, use while-loop
    tokeniseRecord: split input data using delimiter between date, time and steps
    Delimiter: A thing to tell where to look for " ", so it know where to stop
    in the FitnessData, one line put inside the input
    need to create/set a delimiter
    we need to tell the program that we get input and put inside the input, split the data using delimiter (set as ","),
    split the data between date, time and steps. the computer not smart, so we need to tell them.

*/


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,char *date, char *time, int *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        
        // The name of the string pointer for date
        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        // The name of the string pointer for time
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        // The name of the string pointer for steps

        //convert array is a temp holder for the char version of steps
        char convert[50];

        strcpy(convert, token);
        *steps = (atoi(convert));

    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {

    // Get file
    char* filename = "FitnessData_2023.csv";

    // *Set to read only
    FILE *file = fopen(filename, "r");

    // Check if the file is exist
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // How many lines will it read
    int buffer_size = 100;

    // Value to hold per line at the time in the FitnessData
    char line_buffer[100];

    // **Create a suitable size and structure array
    // Store up to 100 Fitness Data records from the file into that array
    FITNESS_DATA fitness_data[100];

    // To store number of value read successfully from each line 
    //of the file, so that we can verify that each line was read in successfully
    //int read = 0;

    // To track the number of records in the file
    int record = 0;

    // ***While-loop to count how many number of records in file
    while(fgets(line_buffer, buffer_size, file) != NULL)
    {
        
        tokeniseRecord(line_buffer,",", fitness_data[record].date, fitness_data[record].time, &fitness_data[record].steps);
        record +=1;
        //printf("%s",line_buffer);
    }

    //Print the requested output in task 1
    printf("Number of records in file: %d\n", record);

    // to print only 3 records in the FitnessData using for loop
    // with condition as less or equal to 3
    for (int i = 0; i < 3; ++i)
    {
        // %s to print a whole string, %c to print a single character
       printf("%s/%s/%d\n",fitness_data[i].date,fitness_data[i].time, fitness_data[i].steps);

    }

    fclose(file);
    return 0;

}

/*
    * = Represent client's bullet point in the comments
    Below are the websites link I referred:
    a)https://www.geeksforgeeks.org/strtok-strtok_r-functions-c-examples/
    b)https://www.youtube.com/watch?v=rbVt5v8NNe8&t=338s
    c)https://www.youtube.com/watch?v=BZFD-eEkhtw
    d)https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm

*/