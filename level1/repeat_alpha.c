/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:36:07 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/04 12:46:34 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/

void	ft_putchar_n(char c, int i)
{
	while (--i >= 0)
		write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar_n(*str, *str + 1 - 'a');
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar_n(*str, *str + 1 - 'A');
		else
			write (1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
	return (0);
}
