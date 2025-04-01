#ifndef INVENTORY_H
#define INVENTORY_H

#define MAX_ITEMS 10

typedef struct {
    char name[50];
    int quantity;
} Item;

typedef enum {
    GALACTIC_CREDITS, // 0
} CurrencyType;

void addItem(const char *itemName, int qty);
void displayInventory();
int updateCurrency(int value, CurrencyType currencyType);
void displayCurrency();

#endif
