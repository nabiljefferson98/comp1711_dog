#include <stdio.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    //bwh ni declare array size 100
    int buffer_size = 100; 
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
    }

    fclose(file);
    return 0;
}

/*

        // Open the CSV file for reading
    FILE *file = fopen("FitnessData_2023.csv", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int MAX_RECORDS = 100; // Define the maximum number of records
    FITNESS_DATA fitnessData[MAX_RECORDS]; // Declare an array of FITNESS_DATA structures
    
    // Define the delimiter character
    const char *delimiter = ",";

    int numRecords = 0;
    char line_buffer[255];

    // Read and process the first three rows from the CSV file
    for (int i = 0; i < 3; ++i) {
        // Read a line from the file
        if (fgets(line_buffer, sizeof(line_buffer), file) != NULL) {
            // Tokenize the line and store data in the FITNESS_DATA structure
            char date[11], time[6], steps[100];
            tokeniseRecord(line_buffer, delimiter, date, time, steps);

            // Store tokenized data in the FITNESS_DATA structure
            strcpy(fitnessData[numRecords].date, date);
            strcpy(fitnessData[numRecords].time, time);
            fitnessData[numRecords].steps = atoi(steps);

            // Increment the number of records
            numRecords++;

            // Print the tokenized data for this row
            printf("Row %d: Date: %s, Time: %s, Steps: %d\n", i + 1, date, time, fitnessData[i].steps);
        } else {
            // If there are no more lines in the file, break the loop
            break;
        }
    }

    // Close the file
    fclose(file);

    return 0;
}


*/