##include <stdio.h>
#include <string.h>
#include <ctype.h>
int isValidUsername(const char *username) {
    int length = strlen(username);
    if (length < 5 || length > 12) {
        return 0;
    }
    for (int i = 0; i < length; ++i) {
        if (!isalnum(username[i])) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char username[100];
   
    printf("Enter a username: ");
    fgets(username, sizeof(username), stdin);
    for (int i = 0; username[i]; i++) {
        if (username[i] == '\n') {
            username[i] = '\0';
            break;
        }
    }
    if (isValidUsername(username)) {
        printf("Valid username.\n");
   } else {
       printf("Invalid username. Must be 5-12 characters and alphanumeric only.\n");
   }
   return 0;
}

