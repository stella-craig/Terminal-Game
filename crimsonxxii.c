#include <stdio.h>
#include <stdlib.h>

void visitCrimsonXXII()
{
    enum currentLocation {
        landingZone = 0,    // 0 = Landing Zone
        shipRepairShop,     // 1 = Ship Repair Shop
        church,             // 2 = Church
        town,               // 3 = Town
        bar,                // 4 = Bar
        mayorOffice,        // 5 = Mayor's Office
        jail,               // 6 = Jailhouse
        outOfTown           // 7 = Out of Town
    }

    system("clear");

    printf("\nYour ship enters Crimson XXII's orbit. Closer to the planet, you can now see the surface is \n"
        "primarily made up of deserts filled with what appears to be red sand. You watch as a large gust of \n"
        "wind picks up some of the sand and whips it around, like a beautiful dance. You already know after \n"
        "landing here, you're going to find sand everywhere for the rest of your life.\n\n"
        "While circling the planet, you notice a small town with a functional landing pad you can use. Before\n"
        "your mind can come up with thoughts of giant sand worms or what color their cacti might be, you land\n"
        "your ship on the available landing pad.\n\n"
    );

    //Next step: Implement option menu for prior to stepping off ship.

}