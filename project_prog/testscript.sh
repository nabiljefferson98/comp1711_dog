#!/bin/bash

# Test 1: Valid maze file
echo "Test 1: Valid maze file"
./maze testdata/valid_maze.txt

# Test 2: Invalid maze file
echo -e "\nTest 2: Invalid maze file"
./maze testdata/invalid_maze.txt

# Test 3: Player walks into a wall
echo -e "\nTest 3: Player walks into a wall"
./maze testdata/wall_maze.txt

# Test 4: Player reaches the exit
echo -e "\nTest 4: Player reaches the exit"
./maze testdata/exit_maze.txt

# Test 5: Player not spawned in the maze game
echo -e "\nTest 5: Player not spawned in the maze game"
./maze testdata/no_player_maze.txt

# Test 6: Player pressed the wrong input
echo -e "\nTest 6: Player pressed the wrong input"
./maze testdata/wrong_input_maze.txt

# Test 7: Player pressed the right input
echo -e "\nTest 7: Player pressed the right input"
./maze testdata/right_input_maze.txt

# Add more tests as needed





# Clean up: Remove any generated files or changes made during testing
echo -e "\nCleaning up..."
rm -f maze

# Done testing
echo -e "\nDone testing!"
```

# Reference I've used as follows:
# a) https://www.geeksforgeeks.org/maze-generation-algorithm-backtracking-2/
# b) https://www.geeksforgeeks.org/maze-generation-algorithms/
# c) Programming Maze by javidx9: https://youtu.be/Y37-gB83HKE?si=iI3SJgJUk8H53q_O
# d) Reference from the Procedural Programming Task 1 and 2
# e) ChatGPT’s response to the prompt "Create a test script examples for maze game in GitHub."