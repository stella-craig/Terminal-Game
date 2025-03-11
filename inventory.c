#include <stdio.h>
#include <string.h>
#include "inventory.h"

static Item inventory[MAX_ITEMS];
static int inventoryCount = 0;

void addItem(const char *itemName, int qty) {
    // Check if the item exists; if so, update its quantity
    for (int i = 0; i < inventoryCount; i++) {
        if (strcmp(inventory[i].name, itemName) == 0) {
            inventory[i].quantity += qty;
            printf("Added %d more of %s to your inventory.\n", qty, itemName);
            return;
        }
    }
    // Otherwise, add a new item if there’s room
    if (inventoryCount < MAX_ITEMS) {
        strncpy(inventory[inventoryCount].name, itemName, sizeof(inventory[inventoryCount].name) - 1);
        inventory[inventoryCount].name[sizeof(inventory[inventoryCount].name) - 1] = '\0';
        inventory[inventoryCount].quantity = qty;
        inventoryCount++;
        printf("Added %s (x%d) to your inventory.\n", itemName, qty);
    } else {
        printf("Inventory full! Cannot add %s.\n", itemName);
    }
}

void displayInventory() {
    printf("\nInventory:\n");
    if (inventoryCount == 0) {
        printf("Your inventory is empty.\n");
    } else {
        for (int i = 0; i < inventoryCount; i++) {
            printf("%d. %s (x%d)\n", i + 1, inventory[i].name, inventory[i].quantity);
        }
    }
}
