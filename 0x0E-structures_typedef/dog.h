#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: A structure type for storing information about a dog.
 * Each dog has a name(string), age (float), and owner (another string).
 */
struct dog
{
char *name;
float age;
char *owner;
}

#endif /* DOG_H */
