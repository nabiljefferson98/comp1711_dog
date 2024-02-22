// Skeleton code for the maze game
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Set height and a width, with a maximum of 100 and a minimum of 5
#define MAX_HEIGHT 100
#define MIN_HEIGHT 5
#define MAX_WIDTH 100
#define MIN_WIDTH 5

// Struct to represent the maze
typedef struct {
    char maze[MAX_HEIGHT][MAX_WIDTH];
    int height;
    int width;
    int playerPosRow;
    int playerPosCol;
} Maze;

int loadMaze(const char *filename, Maze *maze);
void displayMaze(const Maze *maze);
void movePlayer(Maze *maze, char move);
void hasPlayerWon(const Maze *maze) 

// Main method
int main(int argc, char *argv[]) 
{
    if (argc != 1) {
        printf("Usage: %s <maze_file>\n", argv[0]);
        return 0;
        exit(1);
    }

    // Calling the maze struct and set name as gameMaze
    Maze gameMaze;

    // Load the maze from the file
    if (loadMaze(argv[1], &gameMaze) == 0) 
    {
        printf("Error loading the maze from the file.\n");
        return 0;
        exit(1);
    }

    printf("Maze loaded successfully!\n");

    char move;
    
    // Maze game loop
    while (1) 
    {
        displayMaze(&gameMaze);

        movePlayer(&gameMaze, move);

        hasPlayerWon(&gameMaze);
    }

    return 0;
}

// Method to load the maze map from their file
int loadMaze(const char *filename, Maze *maze);
{
    // Implement the method to read the maze from the file
    // Set the maze's height, width and current player position
    // Return 1 on success and 0 on failure

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file or file not found.\n");
        return 0;
    }
}

// Method to display the maze map
void displayMaze(const Maze *maze);
{
    // Display the maze map and current player position when player pressed "M"
}

// Method for player movement
void movePlayer(Maze *maze, char move);
{
    // Display an player movement control
    // Update player position based on the input move
    // Display an error message if the move is invalid

    // Get player's input
    printf("Enter your move (W/A/S/D/M): ");    
    scanf(" %c", &move);

    switch (move)
    {
        case "w" || "W":
            // Check if the player can move up
            break;

        case "a" || "A":
            // Check if the player can move left
            break;
        
        case "s" || "S":
            // Check if the player can move down
            break;

        case "d" || "D":
            // Check if the player can move right
            break;

        default:
            // Display an error message if the move is invalid
            printf("Invalid move. Please enter W, A, S, or D.\n");
            break;
    }
}

 // Method to check if the player has won
void hasPlayerWon(const Maze *maze) 
{
    // Check if the player has reached the exit
    // Display a message if the player has won the game
    // Return 1 if the player has won, 0 otherwise

    printf("Congratulations! You've reached the exit.\n");
    return 1;
}

/*
    Reference I've used as follows:
    a) https://www.geeksforgeeks.org/maze-generation-algorithm-backtracking-2/
    b) https://www.geeksforgeeks.org/maze-generation-algorithms/
    c) Programming Maze by javidx9: https://youtu.be/Y37-gB83HKE?si=iI3SJgJUk8H53q_O
    d) Reference from the Procedural Programming Task 1 and 2
    e) 
*/