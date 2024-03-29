#include <stdlib.h>
/**
 * malloc_checked - allocates memory using mslloc.
 * @b: memory to allocate.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
