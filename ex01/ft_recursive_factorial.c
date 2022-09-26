/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:56:10 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/26 16:29:43 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int		res;

	res = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	res = res * ft_recursive_factorial(nb - 1);
	return (res);
}

/*int	main()
{
	int	nb;
	nb = 9;
printf("%d",ft_recursive_factorial(nb));

}*/
