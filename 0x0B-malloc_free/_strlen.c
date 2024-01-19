#include "main.h"

size_t _strlen(const char *s) {
    size_t length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

