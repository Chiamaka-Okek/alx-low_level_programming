#ifndef dog_h
#define dog_h

/**
 * struct dog - structure for type dog
 *
 * @name: pointer to string for dog name
 * @age: pointer to float for dog age
 * @owner: pointer to stirng for dog owner
 * Description: data structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
