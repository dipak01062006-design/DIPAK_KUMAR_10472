#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char password[50];
    int i;
    int Digit = 0, Upper = 0;
    printf("Enter your password:\n ");
    scanf("%s", password);
    if (strlen(password) < 8) {
        printf("Weak Password :\n");
        printf("Reason: Password must be at least 8 characters long.\n");
        return 0;
    }
    for (i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i]))
            Digit = 1;
        if (isupper(password[i]))
            Upper = 1;
    }
    if (Digit && Upper) {
        printf("Strong Password \n");
    } else {
        printf("Weak Password \n");
        printf("Reason: Password must contain at least one digit and one uppercase letter.\n");
    }
    return 0;
}


