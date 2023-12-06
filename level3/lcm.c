/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:35:54 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/06 14:09:40 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

/*Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);*/

unsigned int	gcd(unsigned int a, unsigned int b)
{
	unsigned int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	result;

	if (a == 0 || b == 0)
		return (0);
	result = (a * b) / gcd(a, b);
	return (result);
}

int	main(void)
{
	unsigned int	test;
	unsigned int	test2;
	
	test = 0;
	test2 = 15;
	printf("%d\n", lcm(test,test2));
	return (0);
}
