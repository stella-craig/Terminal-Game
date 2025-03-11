#ifndef STORY_H
#define STORY_H

typedef enum {
    STORY_START,
    STORY_EXPLORE,
    STORY_STATION,
    STORY_PLANET,
    STORY_COMPLETED,
} StoryStage;

void initStory();
void updateStory(const char *stage);
void displayStory();

#endif
