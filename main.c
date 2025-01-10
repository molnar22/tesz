/*
* Wata f license (R) , use if you want
*/
#include <stdio.h>

int grantAccess(char* username);

void privilegedAction();

int grantAccess(char* username) {
    printf("%s\n", username);
    return 1;
}

void privilegedAction() {
    printf("huhu\n");
}

int main () {
    char username[8];
    int allow = 0;
    int notallowe;
    int mallow = 9;
    printf("Enter your username, please: ");
    gets(username); 
    if (grantAccess(username)) {
        allow = 1;
    }
    if (allow != 0) {
        privilegedAction();
    }
    return 0;
}
