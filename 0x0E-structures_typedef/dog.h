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

#endif
