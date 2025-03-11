#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "inventory.h"
#include "spaceship.h"
#include "story.h"
#include "exploration.h"

void printMenu() {
    printf("\n--- Space Cowboy Quest ---\n");
    printf("1. Explore a Planet\n");
    printf("2. Visit Abandoned Station\n");
    printf("3. Check Inventory\n");
    printf("4. Maintain Spaceship\n");
    printf("5. Show Story Progression\n");
    printf("6. Exit Game\n");
    printf("Enter your choice: ");
}

int main() {
    bool running = true;
    int choice;
    
    // Initialize game systems
    initSpaceship();
    initStory();
    
    printf("Welcome to Space Cowboy Quest: The Golden Planet Mystery\n");
    displayStory();

    while (running) {
        printMenu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // clear input buffer
            continue;
        }
        switch (choice) {
            case 1:
                explorePlanet();
                break;
            case 2:
                visitStation();
                break;
            case 3:
                displayInventory();
                break;
            case 4:
                maintainSpaceship();
                break;
            case 5:
                displayStory();
                break;
            case 6:
                printf("Exiting game. Safe travels, space cowboy!\n");
                running = false;
                break;
            default:
                printf("Invalid option, please try again.\n");
                break;
        }
    }
    
    return 0;
}
