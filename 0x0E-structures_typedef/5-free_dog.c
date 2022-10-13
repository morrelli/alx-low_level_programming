<<<<<<< HEAD
cc
=======
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory of dog
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
>>>>>>> dc61deb108b0ef44e8ff6dc7c769ddbd9b7935a9
