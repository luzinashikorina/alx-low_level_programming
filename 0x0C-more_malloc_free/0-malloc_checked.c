#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Winner winner chicken dinner
 * @b: I tried so hard and got so far
 *
 * Return: But in the end it didn't even matter
 */

void *malloc_checked(unsigned int b)
{

void *resultValue = malloc(b);

if (resultValue == NULL)
{
exit(98);
}

return (resultValue);

}
