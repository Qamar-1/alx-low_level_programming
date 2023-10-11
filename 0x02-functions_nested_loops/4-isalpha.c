#include "main.h"

/**
*_isalpha-check whether an input is an alphabet or not
*@c: alphabet to be checked
*Author-Qamar
*Return: 1 if lower or upper else 0
*/
int _isalpha(int c)
{
return (((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) ? 1 : 0);
}
