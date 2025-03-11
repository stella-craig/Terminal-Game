#include <stdio.h>
#include <string.h>
#include "story.h"

static StoryStage currentStage;

void initStory() {
    currentStage = STORY_START;
}

const char* getStoryStageName(StoryStage stage) {
    switch(stage) {
        case STORY_START:
            return "The Journey Begins";
        case STORY_EXPLORE:
            return "Deep in the Cosmos";
        case STORY_STATION:
            return "Mystery at the Abandoned Station";
        case STORY_PLANET:
            return "Landed on a Mysterious Planet";
        case STORY_COMPLETED:
            return "Golden Planet Revealed";
        default:
            return "Unknown";
    }
}

void updateStory(const char *stage) {
    if (strcmp(stage, "explore") == 0 && currentStage < STORY_EXPLORE) {
        currentStage = STORY_EXPLORE;
    } else if (strcmp(stage, "station") == 0 && currentStage < STORY_STATION) {
        currentStage = STORY_STATION;
    } else if (strcmp(stage, "planet") == 0 && currentStage < STORY_PLANET) {
        currentStage = STORY_PLANET;
    } else if (strcmp(stage, "completed") == 0) {
        currentStage = STORY_COMPLETED;
    }
    printf("Story Progression: %s\n", getStoryStageName(currentStage));
}

void displayStory() {
    printf("\nCurrent Story Stage: %s\n", getStoryStageName(currentStage));
}
