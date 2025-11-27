//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;
    char input[10];

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    // Convert input to enum
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else if (strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid Role!\n");
        return 1;
    }

    // Switch case for messages
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! Full access granted.\n");
            break;
        case USER:
            printf("Welcome User! Limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
