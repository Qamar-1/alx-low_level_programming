#include <stdlib.h>
#include "main.h"
/**
 *str_concat - Concatenates two strings.
 *@s1: The first input string.
 *@s2: The second input string.
 * Return: A pointer to the concatenated string (must be freed after use).
 */
char *str_concat(char *s1, char *s2)
{
int i;
int s1_length = _strlen(s1);
int s2_length = _strlen(s2);
int s3_length = s1_length + s2_length + 1;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s1 = "";
char* s3 = (char*)malloc(s3_length);
if (s3 == NULL)
return NULL;
for (i = 0; i < s1_length; i++)
s3[i] = s1[i];
for ( i = 0; i < s2_length;i++)
s3[s1_length + i] = s2[i];
s3[i] = '\0';
return s3;
}


