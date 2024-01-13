/**
 * _strlen_recursion - Prints a string in reverse
 * using recursion
 * Author- Qamar
 * Return: 0  success
 */
int _strlen_recursion(char *s)
{
if(*s != '\0')
return 1 + _strlen_recursion(s +1);
return (0);
}

