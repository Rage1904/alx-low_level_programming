#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type struct dog with the following elements
 * @name: name of dog
 * @age: dog's age
 * @owner: name of owner
 * Description: struct that shows the details of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_g;

dog_g *new_dog(char *name, float age, char *owner);
void free_dog(dog_g *d);

#endif /*DOG_H*/
