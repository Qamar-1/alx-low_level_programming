void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);


}
