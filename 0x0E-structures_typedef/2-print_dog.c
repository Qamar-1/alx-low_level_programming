/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to a struct dog.
 * Return: No return value.
 */
void print_dog(struct dog *d)
{
if (d == NULL) /* checks if d is NULL */
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}

