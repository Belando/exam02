/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:53:49 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/04 10:56:22 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);*/

#include "stdio.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char	*str;

	str = "probando";
	printf("%d", ft_strlen(str));
	return (0);
}
