#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - I found the love
 * @d: For me, Darling just take my hand
 *
 * Return: And follow my lead
 */

void free_dog(dog_t *d)
{

if (d)
{
free(d->name);
free(d->owner);
free(d);
}

}
