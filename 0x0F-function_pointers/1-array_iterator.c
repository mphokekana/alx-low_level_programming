#include <stdio.h>
/**
 *array_iterator - function that executes function given as paramiter
 *@array: array of elements
 *@size: size of array
 *@action: function pointer.
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && size > 0 && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
