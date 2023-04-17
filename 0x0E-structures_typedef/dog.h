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
 * t_dog - typedef of struct
 */
typedef struct dog t_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
