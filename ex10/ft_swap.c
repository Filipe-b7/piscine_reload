/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:26:33 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/04 15:19:18 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 5;
	int	b = 1;
	int	*pointer_a = &a;
	int	*pointer_b = &b;
	ft_swap(pointer_a,pointer_b);
	printf("pointer a =%d e pointer b= %d",*pointer_a, *pointer_b);
	return (0);
} 
*/	
