#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a dog struct
 * @name: the dog's name
 * @age: his or her age
 * @owner: who's friend is this
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
