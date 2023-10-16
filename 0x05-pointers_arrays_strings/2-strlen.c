/**
 *_strlen -This is   to check the last string character
 *@s :the string to be
 *Author- Qamar
 *Return: 0  success
 */



int _strlen(char *s)
{
int last = 0;
int i;
for i = 0; s[i] != '\0'; i++)
{
last = s[i];
}
return (last);
}
