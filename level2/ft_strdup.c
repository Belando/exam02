/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:35:53 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/04 15:53:48 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);*/

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*cpy;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	cpy = malloc(sizeof(*cpy) * (length + 1));
	if (cpy != NULL)
	{
		while (src[i])
		{
			cpy[i] = src[i];
			i++;
		}
		cpy[i] = '\0';
	}
	return (cpy);
}

int	main(void)
{
	char	*test;

	test = "probando";
	printf("%s\n", ft_strdup(test));
	return (0);
}
