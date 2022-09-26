/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:28:00 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/26 16:17:22 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	if (power == 1)
		return (res);
	res = res * ft_recursive_power(nb, power - 1);
	return (res);
}

/*int	main()
{
	printf("%d", ft_recursive_power(5, 4));
}*/
