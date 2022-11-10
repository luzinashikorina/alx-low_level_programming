#include "main.h"
#include <stdlib.h>

/**
 * array_range - Bend Like a Tulip
 * @min: Blue eyed and foolish
 * @max: Never make the uses
 *
 * Return: Into the fire, breaking through the wire
 */

int *array_range(int min, int max)
{

int *ar;
int i;

if (min > max)
return (NULL);

ar = malloc(sizeof(*ar) * ((max - min) + 1));

if (ar == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
ar[i] = min;

return (ar);

}
