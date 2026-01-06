#include <stdio.h>

int main() {
    int spassword=2005; 
    int ePassword;
    int a=3; 
    while (a>0) {
        printf("Enter your password (%d attempts remaining): ",a);
        scanf("%d",&ePassword);
        if (ePassword==spassword) {
            printf("Login successful! Welcome back.\n");
            break;
        } else {
            a--;
            if (a>0) {
                printf("Incorrect password. Please try again.\n");
            }
        }
    }
    if (a==0) {
        printf("Too many failed attempts.Your account is locked.\n");
    }

    return 0;
}