#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory already allocated
 * @old_size: the old size
 * @new_size: the new size
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
	} else
	{
		for (i = 0; i < new_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
	}
	free(ptr);
	return (new_ptr);
}
