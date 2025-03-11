#ifndef INVENTORY_H
#define INVENTORY_H

#define MAX_ITEMS 10

typedef struct {
    char name[50];
    int quantity;
} Item;

void addItem(const char *itemName, int qty);
void displayInventory();

#endif
