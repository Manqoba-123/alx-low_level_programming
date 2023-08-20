#include <stdio.h>  // Include necessary header

int _isupper(int c);  // Function declaration

int main() {
    char character = 'A';

    if (_isupper(character)) {
        printf("%c is an uppercase letter.\n", character);
    } else {
        printf("%c is not an uppercase letter.\n", character);
    }

    return 0;
}

