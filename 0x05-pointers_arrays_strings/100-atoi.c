#include "main.h"
#include <stdio.h>

int _atoi(char *s) {
    int sign = 1; // Initialize sign to positive
    int num = 0; // Initialize the number to 0

    // Skip over any non-digit characters at the beginning of the string
    while (*s < '0' || *s > '9') {
        // Check for sign character
        if (*s == '-') {
            sign = -1; // Change sign to negative
        } else if (*s == '+') {
            sign = 1; // Change sign to positive
        }
        s++; // Move to next character in string
    }

    // Process each digit character in the string
    while (*s >= '0' && *s <= '9') {
        // Check for integer overflow
        if (num > (2147483647 / 10) || (num == (2147483647 / 10) && (*s - '0') > 7)) {
            if (sign == 1) {
                return 2147483647; // Return maximum integer value if positive overflow occurs
            } else {
                return -2147483648; // Return minimum integer value if negative overflow occurs
            }
        }
        num = num * 10 + (*s - '0'); // Add digit to number
        s++; // Move to next character in string
    }

    return num * sign; // Return the signed number
}
