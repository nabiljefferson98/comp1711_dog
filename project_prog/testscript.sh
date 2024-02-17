#!/bin/bash

# Test 1: Successful maze navigation
echo "Test 1: Successful maze navigation"
./maze

# Test 2: Invalid maze (no 'E' exit)
echo -e "\nTest 2: Invalid maze (no 'E' exit)"
sed -i '4s/E/#/' maze  # Replace 'E' with '#' to create an invalid maze
./maze
sed -i '4s/#/E/' maze  # Restore the original maze

# Test 3: Player hits a wall
echo -e "\nTest 3: Player hits a wall"
sed -i '2s/ /#/' maze  # Replace space with '#' to create a wall in front of the player
./maze
sed -i '2s/#/ /' maze  # Restore the original maze

# Test 4: Maze with no valid path
echo -e "\nTest 4: Maze with no valid path"
sed -i '3s/ /#/' maze  # Replace space with '#' to block the only valid path
./maze
sed -i '3s/#/ /' maze  # Restore the original maze

# Test 5: Start outside the maze
echo -e "\nTest 5: Start outside the maze"
sed -i '1s/S/#/' maze  # Replace 'S' with '#' to move the start position outside the maze
./maze
sed -i '1s/#/S/' maze  # Restore the original maze

# Test 6: Maze with a smaller size
echo -e "\nTest 6: Maze with a smaller size"
sed -i '5d' maze  # Remove the last row to create a smaller maze
./maze
echo "Restoring the original maze size"
echo -e "#\n#\n#\n#\n#" > maze  # Restore the original maze size

# Test 7: Random invalid maze
echo -e "\nTest 7: Random invalid maze"
echo -e "S##\n#E#\n###" > maze  # Create a random invalid maze
./maze

# Clean up: Restore the original maze
echo -e "\nCleaning up: Restoring the original maze"
echo -e "S  #  \n #  # #\n### # #\n#     #\n#####E#" > maze

# cari byk test sampai lebih 20 atau 30 bilangan