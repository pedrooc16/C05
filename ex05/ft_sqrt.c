/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:56:40 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/26 17:18:29 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_sqrt(int nb)
{
	int		i;
	int		res;

	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	res = 0;
	while (i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int	main()
{
	printf("%d", ft_sqrt(46340));
}*/
