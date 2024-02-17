// buat coding berfungsi utk dpt output dr test case yg diberikan oleh test scripts

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10
char maze[HEIGHT][WIDTH];

void timer();
void drawMaze();
void playerControl();

int main()
{
    // Set player position inside maze
    int playerXaxis, playerYaxis = 0;
    char start, afterGame;

    printf("Welcome to the maze game!\n");
    printf("Press 'M/m' to start: \n");
    scanf("%c", &start);

    // If player press other than 'M/m', print invalid input
    while (start != 'M' || start != 'm')
    {
        printf("Invalid input! Please press 'M/m' to start the game\n");
    }

    timer();
    drawMaze();
    playerControl();

    // Print a congratulation message when player finished the maze
    printf("Congratulations! You finished the maze!!\n");
    printf("Press 'R/r' to restart the game or 'Q/q' to quit the game: \n");
    scanf("%c", &afterGame);

    if (afterGame == 'r'|| afterGame = 'R')
    {
        // Restart the game
    }
    else if (afterGame == 'q' || afterGame = 'Q')
    {
        // Quit the game
    }
    else
    {
        // Continue the game
    }
}





void timer()
{
    // Implement timer using time.h library
    printf("You have 5 minutes to finish the maze.\n");
    printf("Goodluck!\n");

    srand(time(300));
}




void drawMaze()
{
    // Generate maze using for loop including player position
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





void playerControl()
{
    // Move player inside the maze
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
            printf("Invalid move!\n");
            break;
    }

}


/*
    class for game timer (potentially using time.h library)
    - Count timer from start to finish
    - Display timer on screen
    - Timer need to refresh every second
*/

/*
    class for player inputs
    - Move player (W/w, A/a, S/s, D/d)
    - Print a maze when player press 'm'
*/

/*
    class for draw and generate maze
    - Use char array to represent maze
    - Use random number generator to generate maze
*/

/*
    Reference I've used as follows:
    a) https://www.geeksforgeeks.org/maze-generation-algorithm-backtracking-2/
    b) https://www.geeksforgeeks.org/maze-generation-algorithms/
    c) ChatGPT’s response to the prompt 'Create a skeleton code for a simple maze game using C program language'
    d) Programming Maze by javidx9: https://youtu.be/Y37-gB83HKE?si=iI3SJgJUk8H53q_O   
*/