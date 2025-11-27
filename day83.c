//Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    char input[10];

    printf("Enter month (e.g., JAN, FEB, MAR): ");
    scanf("%s", input);

    // Convert input to enum value
    if (strcmp(input, "JAN") == 0) m = JAN;
    else if (strcmp(input, "FEB") == 0) m = FEB;
    else if (strcmp(input, "MAR") == 0) m = MAR;
    else if (strcmp(input, "APR") == 0) m = APR;
    else if (strcmp(input, "MAY") == 0) m = MAY;
    else if (strcmp(input, "JUN") == 0) m = JUN;
    else if (strcmp(input, "JUL") == 0) m = JUL;
    else if (strcmp(input, "AUG") == 0) m = AUG;
    else if (strcmp(input, "SEP") == 0) m = SEP;
    else if (strcmp(input, "OCT") == 0) m = OCT;
    else if (strcmp(input, "NOV") == 0) m = NOV;
    else if (strcmp(input, "DEC") == 0) m = DEC;
    else {
        printf("Invalid month!\n");
        return 1;
    }

    // Print number of days
    switch (m) {
        case JAN: printf("31 days\n"); break;
        case FEB: printf("28 or 29 days\n"); break;
        case MAR: printf("31 days\n"); break;
        case APR: printf("30 days\n"); break;
        case MAY: printf("31 days\n"); break;
        case JUN: printf("30 days\n"); break;
        case JUL: printf("31 days\n"); break;
        case AUG: printf("31 days\n"); break;
        case SEP: printf("30 days\n"); break;
        case OCT: printf("31 days\n"); break;
        case NOV: printf("30 days\n"); break;
        case DEC: printf("31 days\n"); break;
    }

    return 0;
}
