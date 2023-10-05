/**
 * int_index - searches for an integer
 *@array: array of integers
 *@size: number of elements in array
 *@cmp: pointer to function used to compare values.
 *Return: index of first element
 * -1 if no element is found or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, num;

	num = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (num);
		}
		for (a = 0; a < size; a++)
		{
			cmp(array[a]);
			if (cmp(array[a]) > 0)
			{
				num = a;
				break;
			}
			if ((cmp(array[a]) == (-1)))
			{
				return (num);
			}
		}
	}
	return (num);
}

