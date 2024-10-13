//
//  main.c
//  OS-Project
//
//  Created by Ahmet Gürkan Gönül on 13.10.2024.
//

#include <stdio.h>
#include <stdlib.h>

#define GRID_SIZE 4
#define SHIP_COUNT 4

void createGrid(int grid[GRID_SIZE][GRID_SIZE]) {
    
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            grid[i][j] = 0;
        }
    }
}

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

void printGridStatus(int grid[GRID_SIZE][GRID_SIZE]) {

    printf("Grid:\n");

    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

void makeRandomShot(int *x, int *y) {
    *x = rand() % GRID_SIZE;
    *y = rand() % GRID_SIZE;
}

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

