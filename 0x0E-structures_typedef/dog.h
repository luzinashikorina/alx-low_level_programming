#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - May I have your attention please
 */
typedef struct dog dog_t;

/**
 * struct dog - Will the real slim shady please stand up
 * @name: I repeat will the real slim shady please stand up
 * @age: Walking around grabbing your you know what
 * @owner: Talking to you know who
 *
 * Description: But if we can hump dead animals, then there's no reason that
 *
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
