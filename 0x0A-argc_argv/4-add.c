#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int containsChars(const char *iString);

/**
 * main - Deep down in Louisiana close to New Orleans
 * @argc: Way back up in the woods among the evergreens
 * @argv: There stood a large cabin made of earth and wood
 *
 * Return: Where lived a country boy named Johnny B. Goode
 */

int main(int argc, char *argv[])
{
int argIndex = 1;
int checkString;
int currentInt;
int argSum = 0;

if (argc > 1)
{
while (argIndex < argc)
{
checkString = containsChars(argv[argIndex]);
if (checkString == 0)
{
currentInt = atoi(argv[argIndex]);
argSum = argSum + currentInt;
argIndex++;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", argSum);
}
else
{
printf("0\n");
}
return (0);
}

/**
 * containsChars - Deep down in Louisiana close to New Orleans
 * @iString: Way back up in the woods among the evergreens
 *
 * Return: Where lived a country boy named Johnny B. Goode
 */

int containsChars(const char *iString)
{

unsigned int inputLength = strlen(iString);
unsigned int inputIndex = 0;
char currentChar;

while (inputIndex < inputLength)
{

currentChar = iString[inputIndex];
if (isdigit(currentChar))
{
inputIndex++;
}
else
{
return (1);
}
}

return (0);

}
