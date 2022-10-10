#ifndef dog_h
#define dog_h

/**
 * struct dog - structure for type dog
 *
 * @name: pointer to string for dog name
 * @age: pointer to float for dog age
 * @owner: pointer to stirng for dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog - typedef for struct
 *
 * @name:pointer to string for the dog name
 * @age:pointer to float for the dog age
 * @owner: pointer to string for dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
