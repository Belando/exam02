/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:15:46 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/05 10:33:57 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.*/

#include "stdio.h"

int	max(int *tab, unsigned int len)
{
	unsigned int	result;
	unsigned int	i;

	i = 0;
	result = tab[i];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (result < (unsigned int)tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

int	main(void)
{
	int				arr[] = {14, 54, 23, -5, 32};
	unsigned int	arr_length;

	arr_length = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", max(arr, arr_length));
	return (0);
}
