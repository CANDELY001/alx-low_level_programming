#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct of dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */
/* BY CHARIFA MASBAHI*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef of struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
