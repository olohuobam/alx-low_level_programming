#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */


unsigned int binary_to_uint(const char* b) {
    if (b == NULL)
        return 0;

    unsigned int deci = 0;
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0') {
            deci <<= 1; // Left shift by 1 position
        } else if (b[i] == '1') {
            deci <<= 1; // Left shift by 1 position
            deci |= 1;  // Set the least significant bit to 1
        } else {
            return 0; // Invalid character, return 0
        }
    }

    return deci;
}
