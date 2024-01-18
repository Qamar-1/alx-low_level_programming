#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
int i;
char* arr;
if (size == 0)
return NULL;
arr = (char*)malloc(size + 1);
if (arr == NULL)
return NULL;
unsigned  int i;
for (i = 0; i < size; i++)
arr[i] = c;
return (0);
}
