#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
if (size == 0)
return NULL;
char* arr = (char*)malloc(size + 1);
if (arr == NULL)
return NULL;
int i;
for (i = 0; i < size; i++)
arr[i] = c;
