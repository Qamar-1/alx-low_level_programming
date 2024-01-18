/**
 * _strdup - Duplicates a string.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string,
 * or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
int i;
int len = strlen(str);
char* new = (char*)malloc((strlen(str) + 1));
if (new == NULL)
return NULL;
for (i = 0; i < len; i++)
{
*(new + i) = str[i];
}
new[i] = '/0';
return new;
}
