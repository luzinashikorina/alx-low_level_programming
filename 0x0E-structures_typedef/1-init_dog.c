#include "dog.h"

/**
 * init_dog - You better loose yourself
 * @d: In the music, the moment
 * @name: You better never let it go
 * @age: You only get one shot
 * @owner: Do not miss your chance to blow
 *
 * Return: Cuz opportunity comes once in a lifetime you
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
