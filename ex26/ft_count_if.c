/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:12:55 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/07 13:34:31 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str [i] != '\0' && j == 1)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 1;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

#include <stdio.h>

int	main(void)
{
	char	*tab[5] = {"ana", "maria1", "joana", "joana2", "0"};
	printf("%i",ft_count_if(tab, *ft_str_is_alpha));
	return (0);
}
*/		
