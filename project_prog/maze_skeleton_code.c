// Skeleton code for the maze game.

// Adding any nessary libraries to enusre the code works properly.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Set height and a width, with a maximum of 100 and a minimum of 5.
#define MAX_HEIGHT 100
#define MAX_WIDTH 100
#define MIN_HEIGHT 5
#define MIN_WIDTH 5

// Struct to represent the maze properties such as height, width, and player position.
// Only if we generate the maze using algorithm, we need to store the maze in the struct.
typedef struct {
    char maze[MAX_HEIGHT][MAX_WIDTH];
    int height;
    int width;
    // Player position y-axis and x-axis.
    int playerY;
    int playerX;
} Maze;

// Call methods.
void generateMaze(const Maze *maze);
void displayMaze(const Maze *maze);
void endgame(const Maze *maze);
int loadMaze(const char *filename, Maze *maze);
int timer(int seconds);
int winPlayer(const Maze *maze);
int losePlayer(const Maze *maze);
char movePlayer(Maze *maze, char move);
char move;

// Main method.
int main(int argc, char *argv[]) 
{
    // Check if the maze file is provided as a command-line argument.
    // Return 1 if the maze file is not provided.
    // Reason use 2 because the first argument is the name of the program.
    if (argc != 2) {
        printf("Usage: %s <maze_file>\n\n", argv[0]);
        return 1;
    }

    // Calling the maze struct and set name as gameMaze.
    Maze gameMaze;

    // Check if the maze is loaded successfully.
    // Return 1 if the maze is not loaded successfully.
    if (!loadMaze(argv[1], &gameMaze)) {
        return 1;
    }

    // Display a message if the maze is loaded successfully.
    printf("\nMaze loaded successfully!\n\n");
    
    // Looping the maze game if accept return 1 from displayMaze method and movePlayer method.
    while (1) 
    {
        // Call the timer method, displayMaze method and movePlayer method.
        timer(60);
        movePlayer(&gameMaze, move);
    }
    
    // Using if statement to check if the player wins or loses.
    if (winPlayer(&gameMaze)) 
    {
        // Call the endgame method.
        endgame(&gameMaze);
        return 0;
    }
    else if (losePlayer(&gameMaze)) 
    {
        endgame(&gameMaze);
        return 0;
    }

    return 0;
}

// Method to load the maze map from its text file
int loadMaze(const char *filename, Maze *maze)
{   
    // Return 1 on success and 0 on failure
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file or file not found.\n\n");
        return 0;
    }
}

// Method for timer
int timer(int seconds)
{
    // Display the time remaining for the player
    // Display a message if the time is up
    // Return 1 if the time is up
    if (seconds == 0)
    {
        printf("Time's up!\n");
        return 1;
    }
}

// Method to generate the maze map
void generateMaze(const Maze *maze)
{
    // Display the maze map using a nested loop to iterate through the maze array
    // Adding maze algorithm to generate the maze map
}

// Method to display the maze map
void displayMaze(const Maze *maze)
{   
    // Example of the maze map to be displayed when the player presses M
    printf( "   #####\n"
            "   #S  #\n"
            "   #  ##\n"
            "   # E##\n"
            "   #####\n\n");
}

// Method for player movement
char movePlayer(Maze *maze, char move)
{
    // Display an player movement control
    // Display an error message if the move is invalid

    // Get player's input
    printf("Press M to display the maze.\n");
    printf("Press Q to quit the game.\n\n");
    printf("Enter your move (W/A/S/D): ");    
    scanf(" %c", &move);

    // Use switch statement for player's movement input
    switch (move) 
    {
        case 'W':
        case 'w':
            // Check if the player can move up
            break;
        
        case 'A':
        case 'a':
            // Check if the player can move left
            break;
        
        case 'S':
        case 's':
            // Check if the player can move down
            break;
        
        case 'D':
        case 'd':
            // Check if the player can move right
            break;
        case 'M':
        case 'm':
            // Call the displayMaze method
            displayMaze(maze);
            break;
        case 'Q':
        case 'q':
            // Display a message if the player quits the game
            printf("\nYou've quit the game.\n\n");
            endgame(maze);
            break;  
        
        
        default:
            // Display an error message if the move is invalid
            printf("Invalid move. Please enter W, A, S, or D only.\n\n");
            break;
    }
}

 // Method to check if the player wins
int winPlayer(const Maze *maze) 
{
    // Check if the player has reached the exit
    // Display a message if the player has won the game
    // Return 1 if the player has won, 0 otherwise

    printf("Congratulations! You've reached the exit.\n\n");
    return 1;
}

// Method to check if the player loses
int losePlayer(const Maze *maze) 
{
    // Check if the player has lost the game
    // Display a message if the player has lost the game
    // Return 1 if the player has lost, 0 otherwise

    printf("You've lost the game.\n\n");
    return 1;
}

// Method for game credits
void endgame(const Maze *maze)
{
    printf("Game Over. Thank you for playing!\n\n");
    exit(0);
}

/*
    Reference I've used as follows:
    a) https://www.geeksforgeeks.org/maze-generation-algorithm-backtracking-2/
    b) https://www.geeksforgeeks.org/maze-generation-algorithms/
    c) Programming Maze by javidx9: https://youtu.be/Y37-gB83HKE?si=iI3SJgJUk8H53q_O
    d) Reference from the Procedural Programming Task 1 and 2
    e) Reference from Amy Brereton and Ban Adil's lecture slides and codes
    f) ChatGPT’s response to the prompt "Create a test script examples for maze game in GitHub.
*/