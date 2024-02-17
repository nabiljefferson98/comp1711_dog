// buat coding berfungsi utk dpt output dr test case yg diberikan oleh test scripts

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Set the maze map height and width
#define WIDTH 20
#define HEIGHT 20
char maze[HEIGHT][WIDTH];

void timer();
void drawMaze();
void playerControl();

int main()
{
    // Set player position inside mazeusing player x-axis and player y-axis
    int playerXaxis, playerYaxis = 0;
    char start, afterGame;

    // Use while loop incase player wants to restart the maze game
    while (0 || 1)
    {    
        // Print a welcome and start button to start using scanf
        printf("Welcome to the maze game!\n");
        printf("Press 'M/m' to start: \n");
        scanf("%c", &start);

        // Using while loop to check user input if player press other than 'M/m' 
        while (start != 'M' || start != 'm')
        {
            // If user input not true, print an error and request user to entering input correctly
            printf("Invalid input! Please press 'M/m' to start the game\n");
        }

        // After user input correctly, the timer starts
        timer();
        // Follow by the maze map is generate
        drawMaze();
        // Lastly, print the player instruction to play the game
        playerControl();

        
        // Print a congratulation message when player finished the maze before timer runs out
        printf("Congratulations! You finished the maze!!\n");
        // Print if the player wants to play again
        printf("Press 'R/r' to restart the game or 'Q/q' to quit the game: \n");
        // Use scanf to check user input
        scanf("%c", &afterGame);

        // Check the user input
        if (afterGame == 'r'|| afterGame = 'R')
        {
            // Restart the game
            // Return(1)
        }
        else if (afterGame == 'q' || afterGame = 'Q')
        {
            // Quit the game
            // using exit(1)
        }
        else
        {
            // Print an error request player to input correctly 
        }
    }
}

/*
    class for game timer (potentially using time.h library)
    - Count timer from start to finish
    - Display timer on screen
    - Timer need to refresh every second
*/

// Function for timer 
void timer()
{
    // Print the timer notification above the maze map
    printf("You have 5 minutes to finish the maze.\n");
    printf("Goodluck!\n");
    // Implement timer using time.h library
    srand(time(300));
}

/*
    class for draw and generate maze
    - Use char array to represent maze
    - Use random number generator to generate maze
*/

// Function to generate / draw the maze map
void drawMaze()
{
    // Generate maze map using for loop including player position
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (i == playerXaxis && j == playerYaxis)
            {
                printf("P");
            }
            else
            {
                printf("%c", maze[i][j]);
            }
        }
        printf("\n");
    }
}

/*
    class for player inputs
    - Move player (W/w, A/a, S/s, D/d)
    - Print a maze when player press 'm'
*/

// Function for player movement inside the maze map
void playerControl()
{
    // Print the player's controller below the maze map
    
    char move;
    printf("Use 'W/w', 'A/a', 'S/s', 'D/d' to move: ");
    scanf("%c", &move);

    // Determine the player position based on the input using switch case
    switch (move)
    {
        case 'W' || 'w':
            playerXaxis--;
            break;
        
        case 'A' || 'a':
            playerYaxis--;
            break;
        
        case 'S' || 's':
            playerXaxis++;
            break;

        case 'D' || 'd':
            playerYaxis++;
            break;

        default:
            // Print error if player incorrect input
            printf("Invalid move!\n");
            break;
    }

}

/*
    Reference I've used as follows:
    a) https://www.geeksforgeeks.org/maze-generation-algorithm-backtracking-2/
    b) https://www.geeksforgeeks.org/maze-generation-algorithms/
    c) 
    d) Programming Maze by javidx9: https://youtu.be/Y37-gB83HKE?si=iI3SJgJUk8H53q_O   
*/