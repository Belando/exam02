/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:49:17 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/05 11:17:47 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

/*Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100*/

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	reversed;

	i = 0;
	reversed = 0;
	while (i < 8)
	{
		reversed = (reversed << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (reversed);
}

int	main(void)
{
	unsigned char	test;

	test = 'a';
	printf("%d\n", reverse_bits(test));
	return (0);
}
