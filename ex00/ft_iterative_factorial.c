/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:47:01 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/26 16:13:12 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int		i;

	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}

/*int	main(void)
{
	printf("%i", ft_iterative_factorial(9));
}*/
