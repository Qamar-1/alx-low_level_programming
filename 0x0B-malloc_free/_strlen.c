#include "main.h"

int _strlen(const char *s) {
    size_t length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

