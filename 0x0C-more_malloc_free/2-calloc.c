#include "main.h"
#include <stdlib.h>

/**
 * _calloc - If I had a diamond heart
 * @nmemb: I'd give you all my love
 * @size: If I was unbreakable
 *
 * Return: I'd walk straight through the bullet
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
p[i] = 0;

return (p);

}
