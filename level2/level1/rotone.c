/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:06:50 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/04 13:29:37 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/

void	rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
			*str += 1;
		else if (*str == 'z' || *str == 'Z')
			*str -= 25;
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	else
		write (1, "\n", 1);
	return (0);
}
