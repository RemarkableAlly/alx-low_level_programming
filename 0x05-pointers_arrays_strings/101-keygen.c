#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * Function to generate a random character from a given set of characters
 */

 char getRandomChar(const char *characters) {
    return characters[rand() % strlen(characters)];
}

//generate a random valid password of a given length
void generateRandomPass(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+{}[]|:;<>,.?/";
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        putchar(getRandomChar(charset));
    }

    putchar('\n');
}

int main() {
    int passwordLength = 12; // Change the length as per your requirements

    generateRandomPass(passwordLength);

    return 0;
}
