#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

/**
 * struct dog - dog_stracture
 * @name: nameof the dog
 * @age: age of the dog
 * @owner: its owner
 *
 */

struct dog
{
	float age;
	char *name;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _SAMPLE_HEADER_H_ */
