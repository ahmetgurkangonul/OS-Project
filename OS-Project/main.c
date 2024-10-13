//
//  main.c
//  OS-Project
//
//  Created by Ahmet Gürkan Gönül on 13.10.2024.
//

#include <stdio.h>
#include <stdlib.h>

#define GRID_SIZE 4 // This represents the grid size. We assume the grid as square.
#define SHIP_COUNT 4 // This represents the number of ships on the grid(play area).

// This method creates a grid and sets the each elements of grid as 0.
void createGrid(int grid[GRID_SIZE][GRID_SIZE]) {
    
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            grid[i][j] = 0;
        }
    }
}

// This method places the ships randomly. Sets elements of grids which has a ship on that, as 1.
void placeShips(int grid[GRID_SIZE][GRID_SIZE]) {
    
    int placed = 0;

    while (placed < SHIP_COUNT) {
        int x = rand() % GRID_SIZE;
        int y = rand() % GRID_SIZE;
        if (grid[x][y] == 0) {
            grid[x][y] = 1;
            placed++;
        }
    }
}

// Prints the status of grids of each player just before the game starts.
void printGridStatus(int grid[GRID_SIZE][GRID_SIZE]) {

    printf("Grid:\n");

    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

// With this method, players make random shot to the grid of enemy.
void makeRandomShot(int *x, int *y) {
    *x = rand() % GRID_SIZE;
    *y = rand() % GRID_SIZE;
}

// This method returns 0 for false or 1 for true after each shot. If it returns 1, a player wins the game and the game ends.
int allShipsDestroyed(int grid[GRID_SIZE][GRID_SIZE]) {

    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            if (grid[i][j] == 1) {
                return 0;
            }
        }
    }

    return 1;
}

int main(void) {

    return 0;
}

