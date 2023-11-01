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

//helper function tu utk splitkan data dlm csv kpd date, time and steps
//dptkan output mengikut each data (filename.date)
//tambah array[]
//determin how many lines / data inside the csv...maybe use for loop
//get output how many numbers of record inside the file...while loop prints every line
//understand 


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array

//**Self note: tokeniseRecord split input data using delimiter between date, time and steps
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {

    char* filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Set the buffer size to 100
    int buffer_size = 100;

    // Value to hold per line at the time in the FitnessData
    char line_buffer[255];

    // Create a suitable size and structure array
    // Store up to 255 Fitness Data records from the file into that array
    FITNESS_DATA fitness_data[255];

    // To store number of value read successfully from each line 
    //of the file, so that we can verify that each line was read in successfully
    int read = 0;

    // To track the number of records in the file
    int record = 0;

    // to print only 3 records in the FitnessData using for loop
    // with condition as less or equal to 3
    for (int i = 0; i <= 3; ++i)
    {
        // Read a line from the file
        if(fgets(line_buffer, buffer_size, file) != NULL)
        {

        }

    }


    fclose(file);
    return 0;

}