#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new dog
 * @name: firdt member
 * @age: second member
 * @owner: third member
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_d - typedef for strct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(char *dest, char *src);
int _strlen(char *s);
#endif
