# DroneSim

**DroneSim** is a simple simulation program that models the movement and behavior of a drone, including altitude changes, forward/backward flight, and battery management. This project demonstrates how to simulate drone control and manage power consumption in a 3D space.

## Features

- **Movement**: The drone can fly in all directions (up, down, forward, backward, left, and right).
- **Battery Management**: The drone consumes battery power when it moves, and the battery can be recharged.
- **Position Tracking**: The drone's position is tracked in a 3D space (X, Y, Z coordinates).
- **Simulation Output**: The program outputs the drone's current position and remaining battery capacity after each movement.

## Technologies Used

- **C++**: The program is written in C++ to demonstrate object-oriented design principles and basic simulation functionality.
- **Classes**: Key components like the drone, battery, and position are modeled as separate classes.
- **Standard Library**: The program uses standard libraries like `<iostream>` for console output.

### Core Classes

1. **`drohne` (Drone)**:
   - Responsible for managing the drone’s movement in 3D space and updating its position.
   - Handles battery consumption during movements and checks if the drone has enough power to continue.

2. **`akku` (Battery)**:
   - Manages the drone’s battery life, including setting capacity and reducing power during each movement.

3. **`position` (Position)**:
   - Tracks the drone’s position in 3D space (X, Y, Z coordinates).
   - Provides methods for retrieving and setting the drone's current position.

## Compilation and Execution

### Compilation
1. Save all the necessary `.cpp` and `.h` files in the same directory (e.g., `drohne.cpp`, `akku.cpp`, `position.cpp`, `drohne.h`, `akku.h`, `position.h`,etc).
2. Use the following command to compile the program:
   ```bash
   make // first command
   After successful compilation, run the program with:
   ./testbench // second command 

