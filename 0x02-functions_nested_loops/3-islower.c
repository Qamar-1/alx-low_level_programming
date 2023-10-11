#include "main.h"

/**
*_islower - checks for lowercase characters
*@c: The character to be checked
*Author - Qamar
*Return: 1 if lower else 0
 */
int _islower(int c)
{
return ((c >= 97 && c <= 122) ? 1 : 0);
}
