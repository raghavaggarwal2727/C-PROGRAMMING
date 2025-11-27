//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

enum Signal {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum Signal light;
    char input[10];

    printf("Enter signal (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    // Convert input to enum value
    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid Signal!\n");
        return 1;
    }

    // Decide action
    switch (light) {
        case RED: 
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
