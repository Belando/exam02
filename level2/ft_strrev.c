/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:20:11 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/04 22:59:49 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);*/

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	temp;

	i = -1;
	length = 0;
	while (str[length])
		length++;
	while (++i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length -1 - i] = temp;
	}
	return (str);
}

int 	main (void)
{
	char	test[] = "abracadabra";

	printf("%s\n", ft_strrev(test));
	return (0);
}
