#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "exploration.h"
#include "inventory.h"
#include "story.h"

void explorePlanet() {
    // Seed random number generator (could be improved by seeding only once in main)
    srand(time(NULL));
    int randomEvent = rand() % 3;
    switch(randomEvent) {
        case 0:
            printf("\nYou land on a barren planet. The winds whisper secrets of the past.\n");
            addItem("Ancient Artifact", 1);
            updateStory("planet");
            break;
        case 1:
            printf("\nYou discover a lush, alien world teeming with life. Strange fruits and plants abound.\n");
            addItem("Exotic Fruit", 3);
            updateStory("planet");
            break;
        case 2:
            printf("\nYou explore a desolate planet scarred by cosmic battles. Scattered remnants of advanced tech lie around.\n");
            addItem("Scrap Metal", 5);
            updateStory("planet");
            break;
        default:
            printf("\nYou wander the planet but find nothing of interest.\n");
            break;
    }
}

void visitStation() {
    printf("\nYou dock at an abandoned space station. Dusty consoles and forgotten logs hint at a lost era.\n");
    addItem("Mysterious Key", 1);
    updateStory("station");
}
