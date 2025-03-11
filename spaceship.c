#include <stdio.h>
#include "spaceship.h"

// Spaceship structure
typedef struct {
    int fuel;
    int hullIntegrity;
} Spaceship;

static Spaceship spaceship;

void initSpaceship() {
    spaceship.fuel = 100;         // starting fuel percentage
    spaceship.hullIntegrity = 100; // starting hull condition percentage
}

void displaySpaceshipStatus() {
    printf("\nSpaceship Status:\n");
    printf("Fuel: %d%%\n", spaceship.fuel);
    printf("Hull Integrity: %d%%\n", spaceship.hullIntegrity);
}

void maintainSpaceship() {
    // Maintenance can repair damage and refuel
    printf("\nMaintaining spaceship...\n");
    if (spaceship.hullIntegrity < 100) {
        spaceship.hullIntegrity += 10;
        if (spaceship.hullIntegrity > 100)
            spaceship.hullIntegrity = 100;
        printf("Hull repaired to %d%%.\n", spaceship.hullIntegrity);
    } else {
        printf("Hull is in perfect condition.\n");
    }
    if (spaceship.fuel < 100) {
        spaceship.fuel += 10;
        if (spaceship.fuel > 100)
            spaceship.fuel = 100;
        printf("Fuel refilled to %d%%.\n", spaceship.fuel);
    } else {
        printf("Fuel tanks are full.\n");
    }
    displaySpaceshipStatus();
}
