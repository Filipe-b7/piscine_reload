/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:18:15 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/05 18:22:40 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d",ft_iterative_factorial(1));
	printf("%d",ft_iterative_factorial(-1));
	printf("%d",ft_iterative_factorial(0));
	printf("%d",ft_iterative_factorial(5));
	return (0);
}*/
